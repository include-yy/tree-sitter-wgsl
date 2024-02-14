/*
 * @file WGSL grammar for tree-sitter
 * @author include-yy yy@egh0bww1.com
 * @license MIT
 */

const PREC = {
    LOGICAL_OR: 1,
    LOGICAL_AND: 2,
    INCLUSIVE_OR: 3,
    EXCLUSIVE_OR: 4,
    BITWISE_AND: 5,
    EQUAL: 6,
    RELATIONAL: 7,
    SHIFT: 9,
    ADD: 10,
    MULTIPLY: 11,
    UNARY: 14,
    CALL: 15,
}

module.exports = grammar({
    name: 'wgsl',

    word: $ => $.identifier,

    externals: $ => [
	$.block_comment,
    ],

    extras: $ => [
	$.line_comment,
	$.block_comment,
	// $3.2
	/[\u0020\u0009\u000a\u000b\u000c\u000d\u0085\u200e\u200f\u2028\u2029]/,
    ],

    inline: $ => [
	$._literal,
    ],

    conflicts: $ => [
	[$.template_elaborated_ident, $._expression],
	[$.type_specifier, $._expression],
    ],

    rules: {
	// $2
	translation_unit: $ => seq(
	    repeat($.global_directive),
	    repeat($._global_decl),
	),
	_global_decl: $ => choice(
	    ';',
	    seq($.global_variable_decl, ';'),
	    seq($.global_value_decl, ';'),
	    seq($.type_alias_decl, ';'),
	    $.struct_decl,
	    $.function_decl,
	    seq($.const_assert_statement, ';'),
	),
	// $2.3
	diagnostic_rule_name: $ => choice(
	    $.identifier,
	    seq($.identifier, '.', $.identifier),
	),
	// $3.3
	line_comment: $ => token(seq('//', /.*/)),
	comment: $ => choice($.line_comment, $.block_comment),
	// $3.5
	_literal: $ => choice(
	    $.int_literal,
	    $.float_literal,
	    $.bool_literal,
	),
	// $3.5.1
	bool_literal: $ => choice('true', 'false'),
	// $3.5.2
	int_literal: $ => token(choice(
	    /0[iu]?/,
	    /[1-9][0-9]*[iu]?/,
	    /0[xX][0-9a-fA-F]+[iu]?/,
	)),
	float_literal: $ => token(choice(
	    /0[fh]/,
	    /[1-9][0-9]*[fh]/,
	    /[0-9]*\.[0-9]+([eE][+-]?[0-9]+)?[fh]?/,
            /[0-9]+\.[0-9]*([eE][+-]?[0-9]+)?[fh]?/,
            /[0-9]+[eE][+-]?[0-9]+[fh]?/,
            /0[xX][0-9a-fA-F]*\.[0-9a-fA-F]+([pP][+-]?[0-9]+[fh]?)?/,
            /0[xX][0-9a-fA-F]+\.[0-9a-fA-F]*([pP][+-]?[0-9]+[fh]?)?/,
            /0[xX][0-9a-fA-F]+[pP][+-]?[0-9]+[fh]?/,
        )),
	// $3.7
	//identifier: $ => /([_\p{XID_Start}][\p{XID_Continue}]+)|([\p{XID_Start}])/,
	//identifier rules from szebmopl's impl
	//https://github.com/szebniok/tree-sitter-wgsl/blob/master/grammar.js
	//Just support alphabet and digit can significantly reduce the size of parser.c
	//(approximately 175 KB less) and speed up the generation process
	identifier: $ => /([a-zA-Z_][0-9a-zA-Z][0-9a-zA-Z_]*)|([a-zA-Z][0-9a-zA-Z_]*)/,
	// $3.10
	template_list: $ => seq(
	    '<',
	    commaSep1(choice(
		prec.dynamic(3, $.type_specifier),
		prec.dynamic(1, $._expression),
	    )),
	    alias(token(prec(1, '>')), '>'),
	),
	// $4
	global_directive: $ => choice(
	    $.diagnostic_directive,
	    $.enable_directive,
	    $.requires_directive,
	),
	// $4.1.1
	enable_directive: $ => seq(
	    "enable",
	    commaSep1($.identifier),
	    ";",
	),
	// $4.1.2
	requires_directive: $ => seq(
	    "require",
	    commaSep1($.identifier),
	    ";",
	),
	// $4.2
	diagnostic_directive: $ => seq("diagnostic", $.diagnostic_control, ";"),
	// $6.2.10
	struct_decl: $ => seq(
	    "struct",
	    field("name", $.identifier),
	    '{',
	    commaSep1($.struct_member),
	    '}',
	),
	struct_member: $ => seq(
	    repeat($.attribute),
	    field("name", $.identifier),
	    ":",
	    field("type", $.type_specifier),
	),
	// $6.7
	type_alias_decl: $ => seq("alias", $.identifier, "=", $.type_specifier),
	// $6.8
	type_specifier: $ => $.template_elaborated_ident,
	template_elaborated_ident: $ => seq(
	    $.identifier,
	    optional($.template_list),
	),
	// $7.4
	variable_or_value_statement: $ => choice(
	    $.variable_decl,
	    seq($.variable_decl, "=", $._expression),
	    seq("let", $._optionally_typed_ident, "=", $._expression),
	    seq("const", $._optionally_typed_ident, "=", $._expression),
	),
	variable_decl: $ => seq(
	    "var",
	    optional($.template_list),
	    $._optionally_typed_ident,
	),
	_optionally_typed_ident: $ =>
	    seq($.identifier, optional(seq(":", $.type_specifier))),
	global_variable_decl: $ => seq(
	    repeat($.attribute),
	    $.variable_decl,
	    optional(seq("=", $._expression)),
	),
	global_value_decl: $ => choice(
	    seq("const", $._optionally_typed_ident, "=", $._expression),
	    seq(repeat($.attribute),
		"override",
		$._optionally_typed_ident,
		optional(seq("=", $._expression))),
	),
	// $8.18
	_expression: $ => choice(
	    $.binary_expression,
	    $._literal,
	    $.identifier,
	    $.template_elaborated_ident,
	    $.call_expression,
	    $.paren_expression,
	    $.unary_expression,
	    // $.subscript_expression,
	    //	    $.field_expression,
	    $.singular_expression,
	),
	call_expression: $ => $.call_phrase,
	call_phrase: $ => prec(PREC.CALL, seq(
	    $.template_elaborated_ident,
	    $.argument_expression_list,
	)),
	argument_expression_list: $ =>
	    seq("(", commaSep($._expression), ")"),
	paren_expression: $ => seq("(", $._expression, ")"),
	component_or_swizzle_specifier: $ => prec.left(PREC.UNARY, seq(
	    repeat1(choice(
		field("index", seq("[", $._expression, "]")),
		field("field", seq(".", $.identifier)),
	    )),
	)),
	unary_expression: $ => prec.left(PREC.UNARY,
	    seq(
		field("operator", choice("-", "!", "~", "*", "&")),
		field("argument", $._expression),
	    )
	),
	singular_expression: $ => seq(
	    choice(
		$.template_elaborated_ident,
		$.call_expression,
		$._literal,
		$.paren_expression,
	    ),
	    $.component_or_swizzle_specifier,
	),
	binary_expression: $ => {
	    const table = [
		["||", PREC.LOGICAL_OR],
		["&&", PREC.LOGICAL_AND],
		["|", PREC.INCLUSIVE_OR],
		["^", PREC.EXCLUSIVE_OR],
		["&", PREC.BITWISE_AND],
		["==", PREC.EQUAL],
		["!=", PREC.EQUAL],
		["<", PREC.RELATIONAL],
		[">", PREC.RELATIONAL],
		["<=", PREC.RELATIONAL],
		[">=", PREC.RELATIONAL],
		["<<", PREC.SHIFT],
		[">>", PREC.SHIFT],
		["+", PREC.ADD],
		["-", PREC.ADD],
		["*", PREC.MULTIPLY],
		["/", PREC.MULTIPLY],
		["%", PREC.MULTIPLY],
	    ];
	    return choice(...table.map(([operator, precedence]) => {
		return prec.left(precedence, seq(
		    field("left", $._expression),
		    field("operator", operator),
		    field("right", $._expression),
		));
	    }));
		},
	lhs_expression: $ => seq(
	    repeat(choice("*", "&")),
	    choice(
		$.identifier,
		seq("(", $.lhs_expression, ")"),
	    ),
	    optional($.component_or_swizzle_specifier),
	),

	//$9.1
	compound_statement: $ => seq(
	    repeat($.attribute),
	    "{",
	    repeat($._statement),
	    "}",
	),
	//$9.2
	assignment_statement: $ => choice(
            seq(
		field("left", $.lhs_expression),
		choice("=", $.compound_assignment_operator),
		field("right", $._expression)
	    ),
	    seq(field("left", "_"), "=", field("right", $._expression)),
        ),
	//$9.2.3
	compound_assignment_operator: $ => choice(
	    "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^=", "<<=", ">>="
	),
	//$9.3
	increment_statement: $ => seq($.lhs_expression, "++"),
        decrement_statement: $ => seq($.lhs_expression, "--"),
	//$9.4.1
	if_statement: $ => seq(
	    repeat($.attribute),
	    "if",
	    field("condition", $._expression),
	    field("consequence", $.compound_statement),
	    optional(seq("else", field("alternative", $.else_statement))),
	),
	else_statement: $ => choice(
	    $.compound_statement,
	    $.if_statement,
	),
	//$9.4.2
	switch_statement: $ => seq(
	    repeat($.attribute),
	    "switch",
	    $._expression,
	    $._switch_body,
	),
        _switch_body: $ => seq(
	    repeat($.attribute),
	    "{",
	    repeat1($.switch_clause),
	    "}",
        ),
	switch_clause: $ => choice(
	    $.case_clause,
	    $.default_alone_clause,
	),
	case_clause: $ =>
	    seq("case", $.case_selectors, optional(":"), $.compound_statement),
	default_alone_clause: $ =>
	    seq("default", optional(":"), $.compound_statement),
	case_selectors: $ => commaSep1(choice("default", $._expression)),
	//$9.4.3
	loop_statement: $ => seq(
	    repeat($.attribute),
	    "loop",
	    repeat($.attribute),
	    "{",
	    repeat($._statement),
	    optional($.continuing_statement),
	    "}",
	),
	//$9.4.4
	for_statement: $ => seq(
	    repeat($.attribute),
	    "for", "(", $.for_header, ")",
	    $.compound_statement,
	),
        for_header: $ => seq(
	    optional($.for_init),
	    ";",
	    optional($._expression),
	    ";",
	    optional($.for_update),
	),
        for_init: $ => choice(
	    $.variable_or_value_statement,
	    $.variable_updating_statement,
	    $.func_call_statement,
        ),
        for_update: $ => choice(
	    $.variable_updating_statement,
	    $.func_call_statement,
        ),
	//$9.4.5
	while_statement: $ => seq(
	    repeat($.attribute),
	    "while", field("condition", $._expression), $.compound_statement,
	),
	//$9.4.6
	break_statement: $ => "break",
	//$9.4.7
        break_if_statement: $ => seq("break", "if", $._expression, ";"),
	//$9.4.8
	continue_statement: $ => "continue",
	//$9.4.9
	continuing_statement: $ => seq("continuing", $.continuing_compound_statement),
        continuing_compound_statement: $ => seq(
	    repeat($.attribute),
	    "{",
	    repeat($._statement),
	    optional($.break_if_statement),
	    "}",
	),
	//$9.4.10
	return_statement: $ => seq("return", optional($._expression)),
	//$9.5
        func_call_statement: $ => $.call_phrase,
	//$9.6
	const_assert_statement: $ => seq("const_assert", $._expression),
	//$9.7
	_statement: $ => choice(
	    ";",
            seq($.return_statement, ";"),
            $.if_statement,
            $.switch_statement,
            $.loop_statement,
            $.for_statement,
            $.while_statement,
            seq($.func_call_statement, ";"),
            seq($.variable_or_value_statement, ";"),
            seq($.break_statement, ";"),
            seq($.continue_statement, ";"),
            seq("discard", ";"),
            seq($.variable_updating_statement, ";"),
            $.compound_statement,
            seq($.const_assert_statement, ";"),
        ),
	variable_updating_statement: $ => choice(
	    $.assignment_statement,
	    $.increment_statement,
	    $.decrement_statement,
	),
	//$10.1
	function_decl: $ => seq(
	    repeat($.attribute),
	    "fn",
	    field("name", $.identifier),
	    "(",
	    field("parameters", optional($.param_list)),
	    ")",
	    field("type", optional(seq("->", repeat($.attribute),
		$.template_elaborated_ident))),
	    field("body", $.compound_statement),
	),
        param_list: $ => commaSep1($.param),
	param: $ => seq(
	    repeat($.attribute),
	    $.identifier, ":",
	    $.type_specifier,
	),
	//$11
	attribute: $ => choice(
	    seq("@", "align", "(", $._expression, $._attrib_end),
	    seq("@", "binding", "(", $._expression, $._attrib_end),
	    seq("@", "builtin", "(", $._expression, $._attrib_end),
	    seq("@", "const"),
	    seq("@", "diagnostic", $.diagnostic_control),
	    seq("@", "group", "(", $._expression, $._attrib_end),
	    seq("@", "id", "(", $._attrib_end),
	    seq("@", "interpolate", "(", $._expression, $._attrib_end),
	    seq("@", "interpolate", "(", $._expression,
		",", $._expression, $._attrib_end),
	    seq("@", "invariant"),
	    seq("@", "location", "(", $._expression, $._attrib_end),
	    seq("@", "must_use"),
	    seq("@", "size", "(", $._expression, $._attrib_end),
	    seq("@", "workgroup_size", "(", $._expression, $._attrib_end),
	    seq("@", "workgroup_size", "(",
		$._expression, ",", $._expression, $._attrib_end),
	    seq("@", "workgroup_size", "(",
		$._expression, ",", $._expression, ",", $._expression, $._attrib_end),
	    seq("@", "vertex"),
	    seq("@", "fragment"),
	    seq("@", "compute"),
	),
	_attrib_end: $ => seq(optional(","), ")"),
	diagnostic_control: $ => seq(
	    "(", $.severity_control_name, ",",
	    $.diagnostic_rule_name, $._attrib_end,
	),
	//$15.4
	severity_control_name: $ => choice(
	    "error", "warning", "info", "off",
	),
	swizzle_name: $ => choice(
	    token(/[rgba]/),
	    token(/[rgba][rgba]/),
	    token(/[rgba][rgba][rgba]/),
	    token(/[rgba][rgba][rgba][rgba]/),
	    token(/[xyzw]/),
	    token(/[xyzw][xyzw]/),
	    token(/[xyzw][xyzw][xyzw]/),
	    token(/[xyzw][xyzw][xyzw][xyzw]/),
	),
    }
})

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)), optional(','));
}
