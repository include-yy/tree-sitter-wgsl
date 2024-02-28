/*
 * @file WGSL grammar for tree-sitter
 * @author include-yy yy@egh0bww1.com
 * @license MIT
 */

// steal from tree-sitter-rust's op precedence
// OP may not be totally orderd, see the link below
// https://www.w3.org/TR/2024/WD-WGSL-20240205/#operator-precedence-associativity
const PREC = {
    call: 11,
    unary: 10,
    mul: 9,
    add: 8,
    shift : 7,
    cmp : 6,
    bitand: 5,
    bitxor: 4,
    bitor: 3,
    and : 2,
    or : 1,
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
	[$.template_ident, $._expression],
	[$.template_list, $._expression],
    ],

    rules: {
	// $2
	translation_unit: $ => seq(
	    repeat($._global_directive),
	    repeat($._global_decl),
	),
	_global_decl: $ => choice(
	    ';',
	    seq($.global_variable_decl, ';'),
	    seq($.global_const_decl, ';'),
	    seq($.global_override_decl, ';'),
	    seq($.type_alias_decl, ';'),
	    seq($.const_assert_statement, ';'),
	    $.struct_decl,
	    $.function_decl,
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
	// maybe we can use token here, it can reduce parser.c's size
	// about 10KB
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
	// steal from tree-sitter-cpp's $.template_argument_list
	// https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js
	template_list: $ => seq(
	    '<',
	    commaSep1(choice(
		prec.dynamic(2, $.template_ident),
		prec.dynamic(1, $._expression),
	    )),
	    alias(token(prec(1, '>')), '>'),
	),
	// $4
	_global_directive: $ => choice(
	    $.diagnostic_directive,
	    $.enable_directive,
	    $.requires_directive,
	),
	// $4.1.1
	enable_directive: $ => seq('enable', commaSep1($.identifier), ';'),
	// $4.1.2
	requires_directive: $ => seq('requires', commaSep1($.identifier), ';'),
	// $4.2
	diagnostic_directive: $ => seq(
	    'diagnostic', '(',
	    choice('error', 'warning', 'info', 'off'), ',',
	    seq($.identifier, optional(seq('.', $.identifier))),
	    optional(','), ')', ';',
	),
	// $6.2.10
	struct_decl: $ => seq(
	    'struct',
	    $.identifier,
	    '{',
	    commaSep1($.struct_member),
	    '}',
	),
	struct_member: $ => seq(
	    repeat($.attribute),
	    field('name', $.identifier),
	    ':',
	    field('type', $.template_ident),
	),
	// $6.7
	type_alias_decl: $ => seq('alias', $.identifier, '=', $.template_ident),
	// $6.8
	template_ident: $ => seq(
	    field('name', $.identifier),
	    field('arguments', optional($.template_list)),
	),
	// $7.4
	_optionally_typed_ident: $ => seq(
	    field('name', $.identifier),
	    optional(seq(':', field('type', $.template_ident))),
	),
	_declaration_value: $ => seq('=', field('value', $._expression)),
	_variable_decl: $ => seq(
	    'var',
	    field('reftype', optional($.template_list)),
	    $._optionally_typed_ident,
	),
	variable_statement: $ => seq(
	    $._variable_decl,
	    optional($._declaration_value),
	),
	value_statement: $ => seq(
	    choice('let', 'const'),
	    $._optionally_typed_ident,
	    $._declaration_value,
	),
	global_variable_decl: $ => seq(
	    repeat($.attribute),
	    $._variable_decl,
	    optional($._declaration_value),
	),
	global_const_decl: $ => seq(
	    'const',
	    $._optionally_typed_ident,
	    $._declaration_value,
	),
	global_override_decl: $ => seq(
	    repeat($.attribute),
	    'override',
	    $._optionally_typed_ident,
	    optional($._declaration_value)),
	// $8.18
	_expression: $ => choice(
	    $.identifier,
	    $.template_ident,
	    $.call_expression,
	    $._literal,
	    $.paren_expression,
	    $.unary_expression,
	    $.index_expression,
	    $.field_expression,
	    $.binary_expression,
	),
	call_expression: $ => seq(
	    field('function', $.template_ident),
	    field('arguments', $.argument_expression_list),
	),
	argument_expression_list: $ => seq('(', commaSep($._expression), ')'),
	paren_expression: $ => seq('(', $._expression, ')'),
	unary_expression: $ => prec(PREC.unary, seq(
	    token(choice('-', '!', '~', '*', '&')),
	    $._expression,
	)),
	index_expression: $ => prec(PREC.call, seq(
	    $._expression, '[', $._expression, ']',
	)),
	field_expression: $ => prec(PREC.call, seq(
	    field('value', $._expression),
	    '.',
	    field('field', $.identifier),
	)),
	binary_expression: $ => {
	    const table = [
		['||', PREC.or], ['&&', PREC.and],
		['|', PREC.bitor], ['^', PREC.bitxor], ['&', PREC.bitand],
		['==', PREC.cmp], ['!=', PREC.cmp],
		['<', PREC.cmp], ['>', PREC.cmp],
		['<=', PREC.cmp], ['>=', PREC.cmp],
		['<<', PREC.shift], ['>>', PREC.shift],
		['+', PREC.add], ['-', PREC.add],
		['*', PREC.mul], ['/', PREC.mul], ['%', PREC.mul],
	    ];
	    return choice(...table.map(([operator, precedence]) => {
		return prec.left(precedence, seq(
		    field('left', $._expression),
		    field('operator', operator),
		    field('right', $._expression),
		));
	    }));
	},
	//$9.1
	compound_statement: $ => seq(
	    repeat($.attribute),
	    '{',
	    repeat($._statement),
	    '}',
	),
	//$9.2
	assignment_statement: $ => choice(
            seq(
		field('left', $._expression),
		token(choice(
		    '=', '+=', '-=', '*=',
		    '/=', '%=', '&=', '|=',
		    '^=', '<<=', '>>=',
		)),
		field('right', $._expression),
	    ),
	    seq(field('left', '_'), '=', field('right', $._expression)),
        ),
	//$9.3
	update_statement: $ => seq($._expression, choice('++', '--')),
	//$9.4.1
	if_statement: $ => seq(
	    repeat($.attribute),
	    'if',
	    field('condition', $._expression),
	    field('consequence', $.compound_statement),
	    optional(seq('else', field('alternative', $.else_statement))),
	),
	else_statement: $ => choice(
	    $.compound_statement,
	    $.if_statement,
	),
	//$9.4.2
	switch_statement: $ => seq(
	    repeat($.attribute),
	    'switch',
	    $._expression,
	    $.switch_body,
	),
	switch_body: $ => seq(
	    repeat($.attribute),
	    '{',
	    repeat1(choice(
		$.case_clause,
		$.default_alone_clause,
	    )),
	    '}',
	),
	case_clause: $ => seq(
	    'case', $.case_selectors, optional(':'), $.compound_statement,
	),
	default_alone_clause: $ => seq('default', optional(':'), $.compound_statement),
	case_selectors: $ => commaSep1(choice('default', $._expression)),
	//$9.4.3
	loop_statement: $ => seq(
	    repeat($.attribute),
	    'loop',
	    repeat($.attribute),
	    '{',
	    repeat($._statement),
	    optional($.continuing_statement),
	    '}',
	),
	//$9.4.4
	for_statement: $ => seq(
	    repeat($.attribute),
	    'for', '(', $.for_header, ')',
	    $.compound_statement,
	),
        for_header: $ => seq(
	    optional(choice(
		$.variable_statement,
		$.value_statement,
		$.update_statement,
		$.assignment_statement,
		$.func_call_statement,
	    )),
	    ';',
	    optional($._expression),
	    ';',
	    optional(choice(
		$.update_statement,
		$.assignment_statement,
		$.func_call_statement,
	    )),
	),
	//$9.4.5
	while_statement: $ => seq(
	    repeat($.attribute),
	    'while', field('condition', $._expression), $.compound_statement,
	),
	//$9.4.6
	break_statement: $ => 'break',
	//$9.4.7
        break_if_statement: $ => seq('break', 'if', $._expression, ';'),
	//$9.4.8
	continue_statement: $ => 'continue',
	//$9.4.9
	continuing_statement: $ => seq('continuing', $.continuing_compound_statement),
        continuing_compound_statement: $ => seq(
	    repeat($.attribute),
	    '{',
	    repeat($._statement),
	    optional($.break_if_statement),
	    '}',
	),
	//$9.4.10
	return_statement: $ => seq('return', optional($._expression)),
	//$9.4.11
	discard_statement: $ => 'discard',
	//$9.5
        func_call_statement: $ => $.call_expression,
	//$9.6
	const_assert_statement: $ => seq('const_assert', $._expression),
	//$9.7
	_statement: $ => choice(
	    ';',
	    $.compound_statement,
            $.if_statement,
            $.switch_statement,
            $.loop_statement,
            $.for_statement,
            $.while_statement,
	    seq($.return_statement, ';'),
            seq($.func_call_statement, ';'),
            seq($.variable_statement, ';'),
	    seq($.value_statement, ';'),
            seq($.break_statement, ';'),
            seq($.continue_statement, ';'),
	    seq($.discard_statement, ';'),
	    seq($.assignment_statement, ';'),
	    seq($.update_statement, ';'),
            seq($.const_assert_statement, ';'),
        ),
	//$10.1
	function_decl: $ => seq(
	    repeat($.attribute),
	    'fn',
	    field('name', $.identifier),
	    $._func_parameters,
	    optional($._func_return_type),
	    field('body', $.compound_statement),
	),
        param_list: $ => commaSep1($.param),
	param: $ => seq(
	    repeat($.attribute),
	    $.identifier, ':',
	    $.template_ident,
	),
	_func_parameters: $ => seq(
	    '(',
	    field('parameters', optional($.param_list)),
	    ')',
	),
	_func_return_type: $ => seq(
	    '->', repeat($.attribute),
	    field('type', $.template_ident),
	),
	//$11
	attribute: $ => seq(
	    '@', $.identifier,
	    optional(seq('(', commaSep1($._expression), ')')),
	),
    }
})

function commaSep(rule) {
    return optional(commaSep1(rule));
}

function commaSep1(rule) {
    return seq(rule, repeat(seq(',', rule)), optional(','));
}
