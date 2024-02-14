#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 509
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 343
#define ALIAS_COUNT 0
#define TOKEN_COUNT 260
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 29

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_DOT = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  aux_sym__decimal_int_literal_token1 = 6,
  aux_sym__decimal_int_literal_token2 = 7,
  sym__hex_int_literal = 8,
  aux_sym__decimal_float_literal_token1 = 9,
  aux_sym__decimal_float_literal_token2 = 10,
  aux_sym__decimal_float_literal_token3 = 11,
  aux_sym__decimal_float_literal_token4 = 12,
  aux_sym__decimal_float_literal_token5 = 13,
  aux_sym__hex_float_literal_token1 = 14,
  aux_sym__hex_float_literal_token2 = 15,
  aux_sym__hex_float_literal_token3 = 16,
  anon_sym_LT = 17,
  anon_sym_COMMA = 18,
  anon_sym_GT = 19,
  anon_sym_enable = 20,
  anon_sym_require = 21,
  anon_sym_diagnostic = 22,
  anon_sym_struct = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_COLON = 26,
  anon_sym_alias = 27,
  anon_sym_EQ = 28,
  anon_sym_let = 29,
  anon_sym_const = 30,
  anon_sym_var = 31,
  anon_sym_override = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DASH = 37,
  anon_sym_BANG = 38,
  anon_sym_TILDE = 39,
  anon_sym_STAR = 40,
  anon_sym_AMP = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_AMP_AMP = 43,
  anon_sym_PIPE = 44,
  anon_sym_CARET = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_GT2 = 48,
  anon_sym_LT_EQ = 49,
  anon_sym_GT_EQ = 50,
  anon_sym_LT_LT = 51,
  anon_sym_GT_GT = 52,
  anon_sym_PLUS = 53,
  anon_sym_SLASH = 54,
  anon_sym_PERCENT = 55,
  anon_sym__ = 56,
  anon_sym_PLUS_EQ = 57,
  anon_sym_DASH_EQ = 58,
  anon_sym_STAR_EQ = 59,
  anon_sym_SLASH_EQ = 60,
  anon_sym_PERCENT_EQ = 61,
  anon_sym_AMP_EQ = 62,
  anon_sym_PIPE_EQ = 63,
  anon_sym_CARET_EQ = 64,
  anon_sym_LT_LT_EQ = 65,
  anon_sym_GT_GT_EQ = 66,
  anon_sym_PLUS_PLUS = 67,
  anon_sym_DASH_DASH = 68,
  anon_sym_if = 69,
  anon_sym_else = 70,
  anon_sym_switch = 71,
  anon_sym_case = 72,
  anon_sym_default = 73,
  anon_sym_loop = 74,
  anon_sym_for = 75,
  anon_sym_while = 76,
  anon_sym_break = 77,
  sym_continue_statement = 78,
  anon_sym_continuing = 79,
  anon_sym_return = 80,
  anon_sym_const_assert = 81,
  anon_sym_discard = 82,
  anon_sym_fn = 83,
  anon_sym_DASH_GT = 84,
  anon_sym_AT = 85,
  anon_sym_align = 86,
  anon_sym_binding = 87,
  anon_sym_builtin = 88,
  anon_sym_group = 89,
  anon_sym_id = 90,
  anon_sym_interpolate = 91,
  anon_sym_invariant = 92,
  anon_sym_location = 93,
  anon_sym_must_use = 94,
  anon_sym_size = 95,
  anon_sym_workgroup_size = 96,
  anon_sym_vertex = 97,
  anon_sym_fragment = 98,
  anon_sym_compute = 99,
  anon_sym_NULL = 100,
  anon_sym_Self = 101,
  anon_sym_abstract = 102,
  anon_sym_active = 103,
  anon_sym_alignas = 104,
  anon_sym_alignof = 105,
  anon_sym_as = 106,
  anon_sym_asm = 107,
  anon_sym_asm_fragment = 108,
  anon_sym_async = 109,
  anon_sym_attribute = 110,
  anon_sym_auto = 111,
  anon_sym_await = 112,
  anon_sym_become = 113,
  anon_sym_binding_array = 114,
  anon_sym_cast = 115,
  anon_sym_catch = 116,
  anon_sym_class = 117,
  anon_sym_co_await = 118,
  anon_sym_co_return = 119,
  anon_sym_co_yield = 120,
  anon_sym_coherent = 121,
  anon_sym_column_major = 122,
  anon_sym_common = 123,
  anon_sym_compile = 124,
  anon_sym_compile_fragment = 125,
  anon_sym_concept = 126,
  anon_sym_const_cast = 127,
  anon_sym_consteval = 128,
  anon_sym_constexpr = 129,
  anon_sym_constinit = 130,
  anon_sym_crate = 131,
  anon_sym_debugger = 132,
  anon_sym_decltype = 133,
  anon_sym_delete = 134,
  anon_sym_demote = 135,
  anon_sym_demote_to_helper = 136,
  anon_sym_do = 137,
  anon_sym_dynamic_cast = 138,
  anon_sym_enum = 139,
  anon_sym_explicit = 140,
  anon_sym_export = 141,
  anon_sym_extends = 142,
  anon_sym_extern = 143,
  anon_sym_external = 144,
  anon_sym_fallthrough = 145,
  anon_sym_filter = 146,
  anon_sym_final = 147,
  anon_sym_finally = 148,
  anon_sym_friend = 149,
  anon_sym_from = 150,
  anon_sym_fxgroup = 151,
  anon_sym_get = 152,
  anon_sym_goto = 153,
  anon_sym_groupshared = 154,
  anon_sym_highp = 155,
  anon_sym_impl = 156,
  anon_sym_implements = 157,
  anon_sym_import = 158,
  anon_sym_inline = 159,
  anon_sym_instanceof = 160,
  anon_sym_interface = 161,
  anon_sym_layout = 162,
  anon_sym_lowp = 163,
  anon_sym_macro = 164,
  anon_sym_macro_rules = 165,
  anon_sym_match = 166,
  anon_sym_mediump = 167,
  anon_sym_meta = 168,
  anon_sym_mod = 169,
  anon_sym_module = 170,
  anon_sym_move = 171,
  anon_sym_mut = 172,
  anon_sym_mutable = 173,
  anon_sym_namespace = 174,
  anon_sym_new = 175,
  anon_sym_nil = 176,
  anon_sym_noexcept = 177,
  anon_sym_noinline = 178,
  anon_sym_nointerpolation = 179,
  anon_sym_noperspective = 180,
  anon_sym_null = 181,
  anon_sym_nullptr = 182,
  anon_sym_of = 183,
  anon_sym_operator = 184,
  anon_sym_package = 185,
  anon_sym_packoffset = 186,
  anon_sym_partition = 187,
  anon_sym_pass = 188,
  anon_sym_patch = 189,
  anon_sym_pixelfragment = 190,
  anon_sym_precise = 191,
  anon_sym_precision = 192,
  anon_sym_premerge = 193,
  anon_sym_priv = 194,
  anon_sym_protected = 195,
  anon_sym_pub = 196,
  anon_sym_public = 197,
  anon_sym_readonly = 198,
  anon_sym_ref = 199,
  anon_sym_regardless = 200,
  anon_sym_register = 201,
  anon_sym_reinterpret_cast = 202,
  anon_sym_resource = 203,
  anon_sym_restrict = 204,
  anon_sym_self = 205,
  anon_sym_set = 206,
  anon_sym_shared = 207,
  anon_sym_sizeof = 208,
  anon_sym_smooth = 209,
  anon_sym_snorm = 210,
  anon_sym_static = 211,
  anon_sym_static_assert = 212,
  anon_sym_static_cast = 213,
  anon_sym_std = 214,
  anon_sym_subroutine = 215,
  anon_sym_super = 216,
  anon_sym_target = 217,
  anon_sym_template = 218,
  anon_sym_this = 219,
  anon_sym_thread_local = 220,
  anon_sym_throw = 221,
  anon_sym_trait = 222,
  anon_sym_try = 223,
  anon_sym_type = 224,
  anon_sym_typedef = 225,
  anon_sym_typeid = 226,
  anon_sym_typename = 227,
  anon_sym_typeof = 228,
  anon_sym_union = 229,
  anon_sym_unless = 230,
  anon_sym_unorm = 231,
  anon_sym_unsafe = 232,
  anon_sym_unsized = 233,
  anon_sym_use = 234,
  anon_sym_using = 235,
  anon_sym_varying = 236,
  anon_sym_virtual = 237,
  anon_sym_volatile = 238,
  anon_sym_wgsl = 239,
  anon_sym_where = 240,
  anon_sym_with = 241,
  anon_sym_writeonly = 242,
  anon_sym_yield = 243,
  anon_sym_error = 244,
  anon_sym_warning = 245,
  anon_sym_info = 246,
  anon_sym_off = 247,
  aux_sym_swizzle_name_token1 = 248,
  aux_sym_swizzle_name_token2 = 249,
  aux_sym_swizzle_name_token3 = 250,
  aux_sym_swizzle_name_token4 = 251,
  aux_sym_swizzle_name_token5 = 252,
  aux_sym_swizzle_name_token6 = 253,
  aux_sym_swizzle_name_token7 = 254,
  aux_sym_swizzle_name_token8 = 255,
  anon_sym_SLASH_SLASH = 256,
  aux_sym__comment_token1 = 257,
  sym__blankspace = 258,
  sym__block_comment = 259,
  sym_translation_unit = 260,
  sym_diagnostic_rule_name = 261,
  sym_literal = 262,
  sym_bool_literal = 263,
  sym_int_literal = 264,
  sym__decimal_int_literal = 265,
  sym_float_literal = 266,
  sym__decimal_float_literal = 267,
  sym__hex_float_literal = 268,
  sym_template_list = 269,
  sym_global_directive = 270,
  sym_enable_directive = 271,
  sym_requires_directive = 272,
  sym_diagnostic_directive = 273,
  sym_struct_decl = 274,
  sym_struct_member = 275,
  sym_type_alias_decl = 276,
  sym_type_specifier = 277,
  sym_template_elaborated_ident = 278,
  sym_variable_or_value_statement = 279,
  sym_variable_decl = 280,
  sym_optionally_typed_ident = 281,
  sym_global_variable_decl = 282,
  sym_global_value_decl = 283,
  sym__expression = 284,
  sym_call_expression = 285,
  sym_call_phrase = 286,
  sym_argument_expression_list = 287,
  sym_paren_expression = 288,
  sym_component_or_swizzle_specifier = 289,
  sym_unary_expression = 290,
  sym_singular_expression = 291,
  sym_binary_expression = 292,
  sym_lhs_expression = 293,
  sym_compound_statement = 294,
  sym_assignment_statement = 295,
  sym_compound_assignment_operator = 296,
  sym_increment_statement = 297,
  sym_decrement_statement = 298,
  sym_if_statement = 299,
  sym_else_statement = 300,
  sym_switch_statement = 301,
  sym__switch_body = 302,
  sym_switch_clause = 303,
  sym_case_clause = 304,
  sym_default_alone_clause = 305,
  sym_case_selectors = 306,
  sym_loop_statement = 307,
  sym_for_statement = 308,
  sym_for_header = 309,
  sym_for_init = 310,
  sym_for_update = 311,
  sym_while_statement = 312,
  sym_break_statement = 313,
  sym_break_if_statement = 314,
  sym_continuing_statement = 315,
  sym_continuing_compound_statement = 316,
  sym_return_statement = 317,
  sym_func_call_statement = 318,
  sym_const_assert_statement = 319,
  sym__statement = 320,
  sym_variable_updating_statement = 321,
  sym_function_decl = 322,
  sym_param_list = 323,
  sym_param = 324,
  sym_attribute = 325,
  sym__attrib_end = 326,
  sym_diagnostic_control = 327,
  sym_severity_control_name = 328,
  sym__comment = 329,
  aux_sym_translation_unit_repeat1 = 330,
  aux_sym_translation_unit_repeat2 = 331,
  aux_sym_template_list_repeat1 = 332,
  aux_sym_enable_directive_repeat1 = 333,
  aux_sym_struct_decl_repeat1 = 334,
  aux_sym_struct_member_repeat1 = 335,
  aux_sym_argument_expression_list_repeat1 = 336,
  aux_sym_component_or_swizzle_specifier_repeat1 = 337,
  aux_sym_lhs_expression_repeat1 = 338,
  aux_sym_compound_statement_repeat1 = 339,
  aux_sym__switch_body_repeat1 = 340,
  aux_sym_case_selectors_repeat1 = 341,
  aux_sym_param_list_repeat1 = 342,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym__decimal_int_literal_token1] = "_decimal_int_literal_token1",
  [aux_sym__decimal_int_literal_token2] = "_decimal_int_literal_token2",
  [sym__hex_int_literal] = "_hex_int_literal",
  [aux_sym__decimal_float_literal_token1] = "_decimal_float_literal_token1",
  [aux_sym__decimal_float_literal_token2] = "_decimal_float_literal_token2",
  [aux_sym__decimal_float_literal_token3] = "_decimal_float_literal_token3",
  [aux_sym__decimal_float_literal_token4] = "_decimal_float_literal_token4",
  [aux_sym__decimal_float_literal_token5] = "_decimal_float_literal_token5",
  [aux_sym__hex_float_literal_token1] = "_hex_float_literal_token1",
  [aux_sym__hex_float_literal_token2] = "_hex_float_literal_token2",
  [aux_sym__hex_float_literal_token3] = "_hex_float_literal_token3",
  [anon_sym_LT] = "<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT] = ">",
  [anon_sym_enable] = "enable",
  [anon_sym_require] = "require",
  [anon_sym_diagnostic] = "diagnostic",
  [anon_sym_struct] = "struct",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_alias] = "alias",
  [anon_sym_EQ] = "=",
  [anon_sym_let] = "let",
  [anon_sym_const] = "const",
  [anon_sym_var] = "var",
  [anon_sym_override] = "override",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT2] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym__] = "_",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_loop] = "loop",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_break] = "break",
  [sym_continue_statement] = "continue_statement",
  [anon_sym_continuing] = "continuing",
  [anon_sym_return] = "return",
  [anon_sym_const_assert] = "const_assert",
  [anon_sym_discard] = "discard",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_AT] = "@",
  [anon_sym_align] = "align",
  [anon_sym_binding] = "binding",
  [anon_sym_builtin] = "builtin",
  [anon_sym_group] = "group",
  [anon_sym_id] = "id",
  [anon_sym_interpolate] = "interpolate",
  [anon_sym_invariant] = "invariant",
  [anon_sym_location] = "location",
  [anon_sym_must_use] = "must_use",
  [anon_sym_size] = "size",
  [anon_sym_workgroup_size] = "workgroup_size",
  [anon_sym_vertex] = "vertex",
  [anon_sym_fragment] = "fragment",
  [anon_sym_compute] = "compute",
  [anon_sym_NULL] = "NULL",
  [anon_sym_Self] = "Self",
  [anon_sym_abstract] = "abstract",
  [anon_sym_active] = "active",
  [anon_sym_alignas] = "alignas",
  [anon_sym_alignof] = "alignof",
  [anon_sym_as] = "as",
  [anon_sym_asm] = "asm",
  [anon_sym_asm_fragment] = "asm_fragment",
  [anon_sym_async] = "async",
  [anon_sym_attribute] = "attribute",
  [anon_sym_auto] = "auto",
  [anon_sym_await] = "await",
  [anon_sym_become] = "become",
  [anon_sym_binding_array] = "binding_array",
  [anon_sym_cast] = "cast",
  [anon_sym_catch] = "catch",
  [anon_sym_class] = "class",
  [anon_sym_co_await] = "co_await",
  [anon_sym_co_return] = "co_return",
  [anon_sym_co_yield] = "co_yield",
  [anon_sym_coherent] = "coherent",
  [anon_sym_column_major] = "column_major",
  [anon_sym_common] = "common",
  [anon_sym_compile] = "compile",
  [anon_sym_compile_fragment] = "compile_fragment",
  [anon_sym_concept] = "concept",
  [anon_sym_const_cast] = "const_cast",
  [anon_sym_consteval] = "consteval",
  [anon_sym_constexpr] = "constexpr",
  [anon_sym_constinit] = "constinit",
  [anon_sym_crate] = "crate",
  [anon_sym_debugger] = "debugger",
  [anon_sym_decltype] = "decltype",
  [anon_sym_delete] = "delete",
  [anon_sym_demote] = "demote",
  [anon_sym_demote_to_helper] = "demote_to_helper",
  [anon_sym_do] = "do",
  [anon_sym_dynamic_cast] = "dynamic_cast",
  [anon_sym_enum] = "enum",
  [anon_sym_explicit] = "explicit",
  [anon_sym_export] = "export",
  [anon_sym_extends] = "extends",
  [anon_sym_extern] = "extern",
  [anon_sym_external] = "external",
  [anon_sym_fallthrough] = "fallthrough",
  [anon_sym_filter] = "filter",
  [anon_sym_final] = "final",
  [anon_sym_finally] = "finally",
  [anon_sym_friend] = "friend",
  [anon_sym_from] = "from",
  [anon_sym_fxgroup] = "fxgroup",
  [anon_sym_get] = "get",
  [anon_sym_goto] = "goto",
  [anon_sym_groupshared] = "groupshared",
  [anon_sym_highp] = "highp",
  [anon_sym_impl] = "impl",
  [anon_sym_implements] = "implements",
  [anon_sym_import] = "import",
  [anon_sym_inline] = "inline",
  [anon_sym_instanceof] = "instanceof",
  [anon_sym_interface] = "interface",
  [anon_sym_layout] = "layout",
  [anon_sym_lowp] = "lowp",
  [anon_sym_macro] = "macro",
  [anon_sym_macro_rules] = "macro_rules",
  [anon_sym_match] = "match",
  [anon_sym_mediump] = "mediump",
  [anon_sym_meta] = "meta",
  [anon_sym_mod] = "mod",
  [anon_sym_module] = "module",
  [anon_sym_move] = "move",
  [anon_sym_mut] = "mut",
  [anon_sym_mutable] = "mutable",
  [anon_sym_namespace] = "namespace",
  [anon_sym_new] = "new",
  [anon_sym_nil] = "nil",
  [anon_sym_noexcept] = "noexcept",
  [anon_sym_noinline] = "noinline",
  [anon_sym_nointerpolation] = "nointerpolation",
  [anon_sym_noperspective] = "noperspective",
  [anon_sym_null] = "null",
  [anon_sym_nullptr] = "nullptr",
  [anon_sym_of] = "of",
  [anon_sym_operator] = "operator",
  [anon_sym_package] = "package",
  [anon_sym_packoffset] = "packoffset",
  [anon_sym_partition] = "partition",
  [anon_sym_pass] = "pass",
  [anon_sym_patch] = "patch",
  [anon_sym_pixelfragment] = "pixelfragment",
  [anon_sym_precise] = "precise",
  [anon_sym_precision] = "precision",
  [anon_sym_premerge] = "premerge",
  [anon_sym_priv] = "priv",
  [anon_sym_protected] = "protected",
  [anon_sym_pub] = "pub",
  [anon_sym_public] = "public",
  [anon_sym_readonly] = "readonly",
  [anon_sym_ref] = "ref",
  [anon_sym_regardless] = "regardless",
  [anon_sym_register] = "register",
  [anon_sym_reinterpret_cast] = "reinterpret_cast",
  [anon_sym_resource] = "resource",
  [anon_sym_restrict] = "restrict",
  [anon_sym_self] = "self",
  [anon_sym_set] = "set",
  [anon_sym_shared] = "shared",
  [anon_sym_sizeof] = "sizeof",
  [anon_sym_smooth] = "smooth",
  [anon_sym_snorm] = "snorm",
  [anon_sym_static] = "static",
  [anon_sym_static_assert] = "static_assert",
  [anon_sym_static_cast] = "static_cast",
  [anon_sym_std] = "std",
  [anon_sym_subroutine] = "subroutine",
  [anon_sym_super] = "super",
  [anon_sym_target] = "target",
  [anon_sym_template] = "template",
  [anon_sym_this] = "this",
  [anon_sym_thread_local] = "thread_local",
  [anon_sym_throw] = "throw",
  [anon_sym_trait] = "trait",
  [anon_sym_try] = "try",
  [anon_sym_type] = "type",
  [anon_sym_typedef] = "typedef",
  [anon_sym_typeid] = "typeid",
  [anon_sym_typename] = "typename",
  [anon_sym_typeof] = "typeof",
  [anon_sym_union] = "union",
  [anon_sym_unless] = "unless",
  [anon_sym_unorm] = "unorm",
  [anon_sym_unsafe] = "unsafe",
  [anon_sym_unsized] = "unsized",
  [anon_sym_use] = "use",
  [anon_sym_using] = "using",
  [anon_sym_varying] = "varying",
  [anon_sym_virtual] = "virtual",
  [anon_sym_volatile] = "volatile",
  [anon_sym_wgsl] = "wgsl",
  [anon_sym_where] = "where",
  [anon_sym_with] = "with",
  [anon_sym_writeonly] = "writeonly",
  [anon_sym_yield] = "yield",
  [anon_sym_error] = "error",
  [anon_sym_warning] = "warning",
  [anon_sym_info] = "info",
  [anon_sym_off] = "off",
  [aux_sym_swizzle_name_token1] = "swizzle_name_token1",
  [aux_sym_swizzle_name_token2] = "swizzle_name_token2",
  [aux_sym_swizzle_name_token3] = "swizzle_name_token3",
  [aux_sym_swizzle_name_token4] = "swizzle_name_token4",
  [aux_sym_swizzle_name_token5] = "swizzle_name_token5",
  [aux_sym_swizzle_name_token6] = "swizzle_name_token6",
  [aux_sym_swizzle_name_token7] = "swizzle_name_token7",
  [aux_sym_swizzle_name_token8] = "swizzle_name_token8",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__comment_token1] = "_comment_token1",
  [sym__blankspace] = "_blankspace",
  [sym__block_comment] = "_block_comment",
  [sym_translation_unit] = "translation_unit",
  [sym_diagnostic_rule_name] = "diagnostic_rule_name",
  [sym_literal] = "literal",
  [sym_bool_literal] = "bool_literal",
  [sym_int_literal] = "int_literal",
  [sym__decimal_int_literal] = "_decimal_int_literal",
  [sym_float_literal] = "float_literal",
  [sym__decimal_float_literal] = "_decimal_float_literal",
  [sym__hex_float_literal] = "_hex_float_literal",
  [sym_template_list] = "template_list",
  [sym_global_directive] = "global_directive",
  [sym_enable_directive] = "enable_directive",
  [sym_requires_directive] = "requires_directive",
  [sym_diagnostic_directive] = "diagnostic_directive",
  [sym_struct_decl] = "struct_decl",
  [sym_struct_member] = "struct_member",
  [sym_type_alias_decl] = "type_alias_decl",
  [sym_type_specifier] = "type_specifier",
  [sym_template_elaborated_ident] = "template_elaborated_ident",
  [sym_variable_or_value_statement] = "variable_or_value_statement",
  [sym_variable_decl] = "variable_decl",
  [sym_optionally_typed_ident] = "optionally_typed_ident",
  [sym_global_variable_decl] = "global_variable_decl",
  [sym_global_value_decl] = "global_value_decl",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_call_phrase] = "call_phrase",
  [sym_argument_expression_list] = "argument_expression_list",
  [sym_paren_expression] = "paren_expression",
  [sym_component_or_swizzle_specifier] = "component_or_swizzle_specifier",
  [sym_unary_expression] = "unary_expression",
  [sym_singular_expression] = "singular_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_lhs_expression] = "lhs_expression",
  [sym_compound_statement] = "compound_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_compound_assignment_operator] = "compound_assignment_operator",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_statement] = "else_statement",
  [sym_switch_statement] = "switch_statement",
  [sym__switch_body] = "_switch_body",
  [sym_switch_clause] = "switch_clause",
  [sym_case_clause] = "case_clause",
  [sym_default_alone_clause] = "default_alone_clause",
  [sym_case_selectors] = "case_selectors",
  [sym_loop_statement] = "loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_header] = "for_header",
  [sym_for_init] = "for_init",
  [sym_for_update] = "for_update",
  [sym_while_statement] = "while_statement",
  [sym_break_statement] = "break_statement",
  [sym_break_if_statement] = "break_if_statement",
  [sym_continuing_statement] = "continuing_statement",
  [sym_continuing_compound_statement] = "continuing_compound_statement",
  [sym_return_statement] = "return_statement",
  [sym_func_call_statement] = "func_call_statement",
  [sym_const_assert_statement] = "const_assert_statement",
  [sym__statement] = "_statement",
  [sym_variable_updating_statement] = "variable_updating_statement",
  [sym_function_decl] = "function_decl",
  [sym_param_list] = "param_list",
  [sym_param] = "param",
  [sym_attribute] = "attribute",
  [sym__attrib_end] = "_attrib_end",
  [sym_diagnostic_control] = "diagnostic_control",
  [sym_severity_control_name] = "severity_control_name",
  [sym__comment] = "_comment",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_translation_unit_repeat2] = "translation_unit_repeat2",
  [aux_sym_template_list_repeat1] = "template_list_repeat1",
  [aux_sym_enable_directive_repeat1] = "enable_directive_repeat1",
  [aux_sym_struct_decl_repeat1] = "struct_decl_repeat1",
  [aux_sym_struct_member_repeat1] = "struct_member_repeat1",
  [aux_sym_argument_expression_list_repeat1] = "argument_expression_list_repeat1",
  [aux_sym_component_or_swizzle_specifier_repeat1] = "component_or_swizzle_specifier_repeat1",
  [aux_sym_lhs_expression_repeat1] = "lhs_expression_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym__switch_body_repeat1] = "_switch_body_repeat1",
  [aux_sym_case_selectors_repeat1] = "case_selectors_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym__decimal_int_literal_token1] = aux_sym__decimal_int_literal_token1,
  [aux_sym__decimal_int_literal_token2] = aux_sym__decimal_int_literal_token2,
  [sym__hex_int_literal] = sym__hex_int_literal,
  [aux_sym__decimal_float_literal_token1] = aux_sym__decimal_float_literal_token1,
  [aux_sym__decimal_float_literal_token2] = aux_sym__decimal_float_literal_token2,
  [aux_sym__decimal_float_literal_token3] = aux_sym__decimal_float_literal_token3,
  [aux_sym__decimal_float_literal_token4] = aux_sym__decimal_float_literal_token4,
  [aux_sym__decimal_float_literal_token5] = aux_sym__decimal_float_literal_token5,
  [aux_sym__hex_float_literal_token1] = aux_sym__hex_float_literal_token1,
  [aux_sym__hex_float_literal_token2] = aux_sym__hex_float_literal_token2,
  [aux_sym__hex_float_literal_token3] = aux_sym__hex_float_literal_token3,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_GT] = anon_sym_GT2,
  [anon_sym_enable] = anon_sym_enable,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_diagnostic] = anon_sym_diagnostic,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_alias] = anon_sym_alias,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT2] = anon_sym_GT2,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym__] = anon_sym__,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_loop] = anon_sym_loop,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_break] = anon_sym_break,
  [sym_continue_statement] = sym_continue_statement,
  [anon_sym_continuing] = anon_sym_continuing,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_const_assert] = anon_sym_const_assert,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_binding] = anon_sym_binding,
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_interpolate] = anon_sym_interpolate,
  [anon_sym_invariant] = anon_sym_invariant,
  [anon_sym_location] = anon_sym_location,
  [anon_sym_must_use] = anon_sym_must_use,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_workgroup_size] = anon_sym_workgroup_size,
  [anon_sym_vertex] = anon_sym_vertex,
  [anon_sym_fragment] = anon_sym_fragment,
  [anon_sym_compute] = anon_sym_compute,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_Self] = anon_sym_Self,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_active] = anon_sym_active,
  [anon_sym_alignas] = anon_sym_alignas,
  [anon_sym_alignof] = anon_sym_alignof,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_asm] = anon_sym_asm,
  [anon_sym_asm_fragment] = anon_sym_asm_fragment,
  [anon_sym_async] = anon_sym_async,
  [anon_sym_attribute] = anon_sym_attribute,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_await] = anon_sym_await,
  [anon_sym_become] = anon_sym_become,
  [anon_sym_binding_array] = anon_sym_binding_array,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_co_await] = anon_sym_co_await,
  [anon_sym_co_return] = anon_sym_co_return,
  [anon_sym_co_yield] = anon_sym_co_yield,
  [anon_sym_coherent] = anon_sym_coherent,
  [anon_sym_column_major] = anon_sym_column_major,
  [anon_sym_common] = anon_sym_common,
  [anon_sym_compile] = anon_sym_compile,
  [anon_sym_compile_fragment] = anon_sym_compile_fragment,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_const_cast] = anon_sym_const_cast,
  [anon_sym_consteval] = anon_sym_consteval,
  [anon_sym_constexpr] = anon_sym_constexpr,
  [anon_sym_constinit] = anon_sym_constinit,
  [anon_sym_crate] = anon_sym_crate,
  [anon_sym_debugger] = anon_sym_debugger,
  [anon_sym_decltype] = anon_sym_decltype,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_demote] = anon_sym_demote,
  [anon_sym_demote_to_helper] = anon_sym_demote_to_helper,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_dynamic_cast] = anon_sym_dynamic_cast,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_explicit] = anon_sym_explicit,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_external] = anon_sym_external,
  [anon_sym_fallthrough] = anon_sym_fallthrough,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_final] = anon_sym_final,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_friend] = anon_sym_friend,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_fxgroup] = anon_sym_fxgroup,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_groupshared] = anon_sym_groupshared,
  [anon_sym_highp] = anon_sym_highp,
  [anon_sym_impl] = anon_sym_impl,
  [anon_sym_implements] = anon_sym_implements,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_instanceof] = anon_sym_instanceof,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_layout] = anon_sym_layout,
  [anon_sym_lowp] = anon_sym_lowp,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_macro_rules] = anon_sym_macro_rules,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_mediump] = anon_sym_mediump,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_move] = anon_sym_move,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_mutable] = anon_sym_mutable,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_noexcept] = anon_sym_noexcept,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_nointerpolation] = anon_sym_nointerpolation,
  [anon_sym_noperspective] = anon_sym_noperspective,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nullptr] = anon_sym_nullptr,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_operator] = anon_sym_operator,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_packoffset] = anon_sym_packoffset,
  [anon_sym_partition] = anon_sym_partition,
  [anon_sym_pass] = anon_sym_pass,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_pixelfragment] = anon_sym_pixelfragment,
  [anon_sym_precise] = anon_sym_precise,
  [anon_sym_precision] = anon_sym_precision,
  [anon_sym_premerge] = anon_sym_premerge,
  [anon_sym_priv] = anon_sym_priv,
  [anon_sym_protected] = anon_sym_protected,
  [anon_sym_pub] = anon_sym_pub,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_readonly] = anon_sym_readonly,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_regardless] = anon_sym_regardless,
  [anon_sym_register] = anon_sym_register,
  [anon_sym_reinterpret_cast] = anon_sym_reinterpret_cast,
  [anon_sym_resource] = anon_sym_resource,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_self] = anon_sym_self,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_shared] = anon_sym_shared,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [anon_sym_smooth] = anon_sym_smooth,
  [anon_sym_snorm] = anon_sym_snorm,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_static_assert] = anon_sym_static_assert,
  [anon_sym_static_cast] = anon_sym_static_cast,
  [anon_sym_std] = anon_sym_std,
  [anon_sym_subroutine] = anon_sym_subroutine,
  [anon_sym_super] = anon_sym_super,
  [anon_sym_target] = anon_sym_target,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_this] = anon_sym_this,
  [anon_sym_thread_local] = anon_sym_thread_local,
  [anon_sym_throw] = anon_sym_throw,
  [anon_sym_trait] = anon_sym_trait,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_typedef] = anon_sym_typedef,
  [anon_sym_typeid] = anon_sym_typeid,
  [anon_sym_typename] = anon_sym_typename,
  [anon_sym_typeof] = anon_sym_typeof,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_unorm] = anon_sym_unorm,
  [anon_sym_unsafe] = anon_sym_unsafe,
  [anon_sym_unsized] = anon_sym_unsized,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_varying] = anon_sym_varying,
  [anon_sym_virtual] = anon_sym_virtual,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym_wgsl] = anon_sym_wgsl,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_writeonly] = anon_sym_writeonly,
  [anon_sym_yield] = anon_sym_yield,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_warning] = anon_sym_warning,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_off] = anon_sym_off,
  [aux_sym_swizzle_name_token1] = aux_sym_swizzle_name_token1,
  [aux_sym_swizzle_name_token2] = aux_sym_swizzle_name_token2,
  [aux_sym_swizzle_name_token3] = aux_sym_swizzle_name_token3,
  [aux_sym_swizzle_name_token4] = aux_sym_swizzle_name_token4,
  [aux_sym_swizzle_name_token5] = aux_sym_swizzle_name_token5,
  [aux_sym_swizzle_name_token6] = aux_sym_swizzle_name_token6,
  [aux_sym_swizzle_name_token7] = aux_sym_swizzle_name_token7,
  [aux_sym_swizzle_name_token8] = aux_sym_swizzle_name_token8,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__comment_token1] = aux_sym__comment_token1,
  [sym__blankspace] = sym__blankspace,
  [sym__block_comment] = sym__block_comment,
  [sym_translation_unit] = sym_translation_unit,
  [sym_diagnostic_rule_name] = sym_diagnostic_rule_name,
  [sym_literal] = sym_literal,
  [sym_bool_literal] = sym_bool_literal,
  [sym_int_literal] = sym_int_literal,
  [sym__decimal_int_literal] = sym__decimal_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym__decimal_float_literal] = sym__decimal_float_literal,
  [sym__hex_float_literal] = sym__hex_float_literal,
  [sym_template_list] = sym_template_list,
  [sym_global_directive] = sym_global_directive,
  [sym_enable_directive] = sym_enable_directive,
  [sym_requires_directive] = sym_requires_directive,
  [sym_diagnostic_directive] = sym_diagnostic_directive,
  [sym_struct_decl] = sym_struct_decl,
  [sym_struct_member] = sym_struct_member,
  [sym_type_alias_decl] = sym_type_alias_decl,
  [sym_type_specifier] = sym_type_specifier,
  [sym_template_elaborated_ident] = sym_template_elaborated_ident,
  [sym_variable_or_value_statement] = sym_variable_or_value_statement,
  [sym_variable_decl] = sym_variable_decl,
  [sym_optionally_typed_ident] = sym_optionally_typed_ident,
  [sym_global_variable_decl] = sym_global_variable_decl,
  [sym_global_value_decl] = sym_global_value_decl,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_call_phrase] = sym_call_phrase,
  [sym_argument_expression_list] = sym_argument_expression_list,
  [sym_paren_expression] = sym_paren_expression,
  [sym_component_or_swizzle_specifier] = sym_component_or_swizzle_specifier,
  [sym_unary_expression] = sym_unary_expression,
  [sym_singular_expression] = sym_singular_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_lhs_expression] = sym_lhs_expression,
  [sym_compound_statement] = sym_compound_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_compound_assignment_operator] = sym_compound_assignment_operator,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym__switch_body] = sym__switch_body,
  [sym_switch_clause] = sym_switch_clause,
  [sym_case_clause] = sym_case_clause,
  [sym_default_alone_clause] = sym_default_alone_clause,
  [sym_case_selectors] = sym_case_selectors,
  [sym_loop_statement] = sym_loop_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_header] = sym_for_header,
  [sym_for_init] = sym_for_init,
  [sym_for_update] = sym_for_update,
  [sym_while_statement] = sym_while_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_break_if_statement] = sym_break_if_statement,
  [sym_continuing_statement] = sym_continuing_statement,
  [sym_continuing_compound_statement] = sym_continuing_compound_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_func_call_statement] = sym_func_call_statement,
  [sym_const_assert_statement] = sym_const_assert_statement,
  [sym__statement] = sym__statement,
  [sym_variable_updating_statement] = sym_variable_updating_statement,
  [sym_function_decl] = sym_function_decl,
  [sym_param_list] = sym_param_list,
  [sym_param] = sym_param,
  [sym_attribute] = sym_attribute,
  [sym__attrib_end] = sym__attrib_end,
  [sym_diagnostic_control] = sym_diagnostic_control,
  [sym_severity_control_name] = sym_severity_control_name,
  [sym__comment] = sym__comment,
  [aux_sym_translation_unit_repeat1] = aux_sym_translation_unit_repeat1,
  [aux_sym_translation_unit_repeat2] = aux_sym_translation_unit_repeat2,
  [aux_sym_template_list_repeat1] = aux_sym_template_list_repeat1,
  [aux_sym_enable_directive_repeat1] = aux_sym_enable_directive_repeat1,
  [aux_sym_struct_decl_repeat1] = aux_sym_struct_decl_repeat1,
  [aux_sym_struct_member_repeat1] = aux_sym_struct_member_repeat1,
  [aux_sym_argument_expression_list_repeat1] = aux_sym_argument_expression_list_repeat1,
  [aux_sym_component_or_swizzle_specifier_repeat1] = aux_sym_component_or_swizzle_specifier_repeat1,
  [aux_sym_lhs_expression_repeat1] = aux_sym_lhs_expression_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym__switch_body_repeat1] = aux_sym__switch_body_repeat1,
  [aux_sym_case_selectors_repeat1] = aux_sym_case_selectors_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__decimal_int_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_int_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__hex_int_literal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__decimal_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_float_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_float_literal_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decimal_float_literal_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_float_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__hex_float_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diagnostic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_continuing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interpolate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_invariant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_location] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_must_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_workgroup_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vertex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_active] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignas] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_async] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_become] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binding_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_await] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_co_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_coherent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_column_major] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_common] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compile_fragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consteval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constexpr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debugger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decltype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_demote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_demote_to_helper] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dynamic_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explicit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_external] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fallthrough] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_final] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_friend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fxgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_groupshared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_highp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_impl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implements] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_instanceof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_layout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lowp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mediump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_move] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noexcept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nointerpolation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noperspective] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_operator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packoffset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_partition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pixelfragment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_premerge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_priv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protected] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pub] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_regardless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_register] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reinterpret_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resource] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shared] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_smooth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_snorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_super] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_thread_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trait] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typedef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unorm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsafe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsized] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varying] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_virtual] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wgsl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_swizzle_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_swizzle_name_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__blankspace] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_diagnostic_rule_name] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_int_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__decimal_float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_float_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_template_list] = {
    .visible = true,
    .named = true,
  },
  [sym_global_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_diagnostic_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_template_elaborated_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_or_value_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_optionally_typed_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_global_variable_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_global_value_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_phrase] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_component_or_swizzle_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_singular_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__switch_body] = {
    .visible = false,
    .named = true,
  },
  [sym_switch_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_case_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_default_alone_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_case_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_header] = {
    .visible = true,
    .named = true,
  },
  [sym_for_init] = {
    .visible = true,
    .named = true,
  },
  [sym_for_update] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continuing_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_const_assert_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_updating_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_function_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__attrib_end] = {
    .visible = false,
    .named = true,
  },
  [sym_diagnostic_control] = {
    .visible = true,
    .named = true,
  },
  [sym_severity_control_name] = {
    .visible = true,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_translation_unit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enable_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_member_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_or_swizzle_specifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lhs_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__switch_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_field = 6,
  field_index = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_parameters = 11,
  field_right = 12,
  field_type = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_index] = "index",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 4},
  [5] = {.index = 10, .length = 3},
  [6] = {.index = 13, .length = 1},
  [7] = {.index = 14, .length = 3},
  [8] = {.index = 17, .length = 2},
  [9] = {.index = 19, .length = 2},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 2},
  [12] = {.index = 26, .length = 2},
  [13] = {.index = 28, .length = 4},
  [14] = {.index = 32, .length = 3},
  [15] = {.index = 35, .length = 2},
  [16] = {.index = 37, .length = 2},
  [17] = {.index = 39, .length = 1},
  [18] = {.index = 40, .length = 5},
  [19] = {.index = 45, .length = 5},
  [20] = {.index = 50, .length = 4},
  [21] = {.index = 54, .length = 2},
  [22] = {.index = 56, .length = 1},
  [23] = {.index = 57, .length = 6},
  [24] = {.index = 63, .length = 5},
  [25] = {.index = 68, .length = 5},
  [26] = {.index = 73, .length = 3},
  [27] = {.index = 76, .length = 6},
  [28] = {.index = 82, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_argument, 1},
    {field_operator, 0},
  [2] =
    {field_field, 0, .inherited = true},
    {field_index, 0, .inherited = true},
  [4] =
    {field_field, 0},
    {field_field, 1},
  [6] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
    {field_index, 0, .inherited = true},
    {field_index, 1, .inherited = true},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_name, 1},
  [14] =
    {field_index, 0},
    {field_index, 1},
    {field_index, 2},
  [17] =
    {field_body, 4},
    {field_name, 1},
  [19] =
    {field_name, 0},
    {field_type, 2},
  [21] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 3},
  [24] =
    {field_body, 5},
    {field_name, 2},
  [26] =
    {field_name, 1},
    {field_type, 3},
  [28] =
    {field_body, 6},
    {field_name, 1},
    {field_type, 4},
    {field_type, 5},
  [32] =
    {field_body, 6},
    {field_name, 2},
    {field_parameters, 4},
  [35] =
    {field_left, 0},
    {field_right, 2},
  [37] =
    {field_condition, 1},
    {field_consequence, 2},
  [39] =
    {field_condition, 1},
  [40] =
    {field_body, 7},
    {field_name, 1},
    {field_type, 4},
    {field_type, 5},
    {field_type, 6},
  [45] =
    {field_body, 7},
    {field_name, 1},
    {field_parameters, 3},
    {field_type, 5},
    {field_type, 6},
  [50] =
    {field_body, 7},
    {field_name, 2},
    {field_type, 5},
    {field_type, 6},
  [54] =
    {field_condition, 2},
    {field_consequence, 3},
  [56] =
    {field_condition, 2},
  [57] =
    {field_body, 8},
    {field_name, 1},
    {field_parameters, 3},
    {field_type, 5},
    {field_type, 6},
    {field_type, 7},
  [63] =
    {field_body, 8},
    {field_name, 2},
    {field_type, 5},
    {field_type, 6},
    {field_type, 7},
  [68] =
    {field_body, 8},
    {field_name, 2},
    {field_parameters, 4},
    {field_type, 6},
    {field_type, 7},
  [73] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [76] =
    {field_body, 9},
    {field_name, 2},
    {field_parameters, 4},
    {field_type, 6},
    {field_type, 7},
    {field_type, 8},
  [82] =
    {field_alternative, 5},
    {field_condition, 2},
    {field_consequence, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 21,
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 30,
  [37] = 35,
  [38] = 38,
  [39] = 33,
  [40] = 34,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 53,
  [65] = 65,
  [66] = 66,
  [67] = 50,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 44,
  [76] = 61,
  [77] = 57,
  [78] = 78,
  [79] = 56,
  [80] = 80,
  [81] = 54,
  [82] = 52,
  [83] = 51,
  [84] = 71,
  [85] = 74,
  [86] = 62,
  [87] = 87,
  [88] = 62,
  [89] = 49,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 96,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 102,
  [139] = 101,
  [140] = 140,
  [141] = 97,
  [142] = 142,
  [143] = 99,
  [144] = 100,
  [145] = 103,
  [146] = 94,
  [147] = 105,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 91,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 90,
  [172] = 172,
  [173] = 173,
  [174] = 93,
  [175] = 175,
  [176] = 110,
  [177] = 113,
  [178] = 178,
  [179] = 179,
  [180] = 114,
  [181] = 109,
  [182] = 115,
  [183] = 120,
  [184] = 119,
  [185] = 121,
  [186] = 118,
  [187] = 116,
  [188] = 107,
  [189] = 189,
  [190] = 108,
  [191] = 111,
  [192] = 106,
  [193] = 117,
  [194] = 112,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 195,
  [203] = 201,
  [204] = 204,
  [205] = 133,
  [206] = 132,
  [207] = 207,
  [208] = 135,
  [209] = 136,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 124,
  [214] = 125,
  [215] = 131,
  [216] = 216,
  [217] = 126,
  [218] = 130,
  [219] = 134,
  [220] = 129,
  [221] = 221,
  [222] = 222,
  [223] = 128,
  [224] = 127,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 227,
  [240] = 240,
  [241] = 229,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 103,
  [249] = 249,
  [250] = 105,
  [251] = 251,
  [252] = 110,
  [253] = 107,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 307,
  [321] = 308,
  [322] = 322,
  [323] = 243,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 244,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 245,
  [351] = 351,
  [352] = 338,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 375,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 388,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 382,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 392,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 451,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 451,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 459,
  [505] = 472,
  [506] = 506,
  [507] = 507,
  [508] = 508,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'c'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'v')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'c' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'v')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(90);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '&') ADVANCE(96);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '_') ADVANCE(117);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(91);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(67);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(100);
      if (lookahead == '}') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(105);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(115);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '|') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 35:
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(71);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(89);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(80);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == '_') ADVANCE(117);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '~') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(137);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(71);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__decimal_int_literal_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__decimal_int_literal_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(47);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__decimal_int_literal_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__decimal_int_literal_token2);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(48);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__hex_int_literal);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__hex_int_literal);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (lookahead == 'i' ||
          lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token3);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token3);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token4);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token4);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token5);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__decimal_float_literal_token5);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token1);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token1);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token2);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token2);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token3);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__hex_float_literal_token3);
      if (lookahead == 'f' ||
          lookahead == 'h') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(71);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(71);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'g' ||
          lookahead == 'r') ADVANCE(66);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(71);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(68);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('w' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(18);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(119);
      if (lookahead == '>') ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(98);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT2);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead == '=') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(71);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '/') ADVANCE(135);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8206 ||
          lookahead == 8207 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(136);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__blankspace);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'N') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(2);
      if (lookahead == 'a') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(31);
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(77);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(84);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(109);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'm') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'm') ADVANCE(136);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(157);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_id);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 63:
      if (lookahead == 'y') ADVANCE(164);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(178);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == 'f') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 79:
      if (lookahead == 'x') ADVANCE(191);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 85:
      if (lookahead == 'z') ADVANCE(206);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 89:
      if (lookahead == 'b') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(216);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(220);
      if (lookahead == 'y') ADVANCE(221);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'l') ADVANCE(224);
      if (lookahead == 'o') ADVANCE(225);
      if (lookahead == 's') ADVANCE(226);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(241);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(242);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == '_') ADVANCE(247);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(259);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 'y') ADVANCE(262);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(265);
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(275);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(277);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 141:
      if (lookahead == 'b') ADVANCE(280);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 150:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(291);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(294);
      END_STATE();
    case 156:
      if (lookahead == 'u') ADVANCE(295);
      END_STATE();
    case 157:
      if (lookahead == 'h') ADVANCE(296);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(300);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(305);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(306);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(307);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(310);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == 'u') ADVANCE(312);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 180:
      if (lookahead == 'x') ADVANCE(317);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 187:
      if (lookahead == 'k') ADVANCE(323);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(325);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(326);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(327);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(328);
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 193:
      if (lookahead == 'v') ADVANCE(330);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_pub);
      if (lookahead == 'l') ADVANCE(332);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(334);
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(337);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(340);
      END_STATE();
    case 203:
      if (lookahead == 'f') ADVANCE(341);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_std);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(347);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 215:
      if (lookahead == 'g') ADVANCE(351);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(352);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(354);
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == 'y') ADVANCE(365);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 233:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 237:
      if (lookahead == 'h') ADVANCE(373);
      END_STATE();
    case 238:
      if (lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Self);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(378);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 246:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(381);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(382);
      END_STATE();
    case 249:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 252:
      if (lookahead == 'm') ADVANCE(385);
      END_STATE();
    case 253:
      if (lookahead == 'i') ADVANCE(386);
      END_STATE();
    case 254:
      if (lookahead == 'k') ADVANCE(387);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 258:
      if (lookahead == 'h') ADVANCE(389);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 260:
      if (lookahead == 'w') ADVANCE(391);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 262:
      if (lookahead == 'i') ADVANCE(393);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 264:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 265:
      if (lookahead == 'o') ADVANCE(396);
      END_STATE();
    case 266:
      if (lookahead == 'i') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 271:
      if (lookahead == 'g') ADVANCE(403);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 276:
      if (lookahead == 'n') ADVANCE(408);
      END_STATE();
    case 277:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(410);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 280:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 282:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 284:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 285:
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 289:
      if (lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 290:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 295:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 296:
      if (lookahead == 'p') ADVANCE(425);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_impl);
      if (lookahead == 'e') ADVANCE(426);
      END_STATE();
    case 298:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 301:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 302:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 303:
      if (lookahead == 'r') ADVANCE(431);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_loop);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_lowp);
      END_STATE();
    case 308:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 309:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 312:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_move);
      END_STATE();
    case 314:
      if (lookahead == '_') ADVANCE(438);
      END_STATE();
    case 315:
      if (lookahead == 'b') ADVANCE(439);
      END_STATE();
    case 316:
      if (lookahead == 's') ADVANCE(440);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 318:
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(444);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 321:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 323:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(449);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_pass);
      END_STATE();
    case 326:
      if (lookahead == 'h') ADVANCE(451);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_priv);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(455);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 334:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(459);
      END_STATE();
    case 336:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 338:
      if (lookahead == 'u') ADVANCE(462);
      END_STATE();
    case 339:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 340:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_self);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_size);
      if (lookahead == 'o') ADVANCE(466);
      END_STATE();
    case 344:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 345:
      if (lookahead == 'm') ADVANCE(468);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 347:
      if (lookahead == 'c') ADVANCE(470);
      END_STATE();
    case 348:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 350:
      if (lookahead == 'c') ADVANCE(473);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 352:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_this);
      END_STATE();
    case 354:
      if (lookahead == 'a') ADVANCE(476);
      END_STATE();
    case 355:
      if (lookahead == 'w') ADVANCE(477);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == 'd') ADVANCE(479);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 360:
      if (lookahead == 's') ADVANCE(484);
      END_STATE();
    case 361:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 362:
      if (lookahead == 'f') ADVANCE(486);
      END_STATE();
    case 363:
      if (lookahead == 'z') ADVANCE(487);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(488);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 367:
      if (lookahead == 'u') ADVANCE(491);
      END_STATE();
    case 368:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(493);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_wgsl);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 374:
      if (lookahead == 'g') ADVANCE(496);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 376:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_async);
      END_STATE();
    case 383:
      if (lookahead == 'b') ADVANCE(504);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_await);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 392:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(511);
      END_STATE();
    case 395:
      if (lookahead == 'n') ADVANCE(512);
      END_STATE();
    case 396:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 398:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 399:
      if (lookahead == 'p') ADVANCE(516);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_') ADVANCE(517);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(519);
      END_STATE();
    case 401:
      if (lookahead == 'n') ADVANCE(520);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_crate);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 404:
      if (lookahead == 'y') ADVANCE(522);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(523);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 409:
      if (lookahead == 'r') ADVANCE(527);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 413:
      if (lookahead == 'c') ADVANCE(530);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 415:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(533);
      END_STATE();
    case 417:
      if (lookahead == 'h') ADVANCE(534);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 419:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_final);
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 423:
      if (lookahead == 'u') ADVANCE(539);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == 's') ADVANCE(540);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_highp);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(544);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(545);
      if (lookahead == 'p') ADVANCE(546);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '_') ADVANCE(550);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 436:
      if (lookahead == 'm') ADVANCE(551);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 438:
      if (lookahead == 'u') ADVANCE(553);
      END_STATE();
    case 439:
      if (lookahead == 'l') ADVANCE(554);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 444:
      if (lookahead == 's') ADVANCE(559);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 448:
      if (lookahead == 'g') ADVANCE(563);
      END_STATE();
    case 449:
      if (lookahead == 'f') ADVANCE(564);
      END_STATE();
    case 450:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 452:
      if (lookahead == 'f') ADVANCE(566);
      END_STATE();
    case 453:
      if (lookahead == 's') ADVANCE(567);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(568);
      END_STATE();
    case 455:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 456:
      if (lookahead == 'c') ADVANCE(570);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 458:
      if (lookahead == 'd') ADVANCE(572);
      END_STATE();
    case 459:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(575);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(576);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 465:
      if (lookahead == 'd') ADVANCE(579);
      END_STATE();
    case 466:
      if (lookahead == 'f') ADVANCE(580);
      END_STATE();
    case 467:
      if (lookahead == 'h') ADVANCE(581);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_snorm);
      END_STATE();
    case 469:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 470:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 471:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(585);
      END_STATE();
    case 474:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 476:
      if (lookahead == 'd') ADVANCE(588);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_trait);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 480:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 482:
      if (lookahead == 'f') ADVANCE(592);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_unorm);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 489:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 490:
      if (lookahead == 'x') ADVANCE(597);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 493:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 496:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_yield);
      END_STATE();
    case 499:
      if (lookahead == 'c') ADVANCE(603);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_active);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(604);
      END_STATE();
    case 502:
      if (lookahead == 'f') ADVANCE(605);
      END_STATE();
    case 503:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 504:
      if (lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_become);
      END_STATE();
    case 506:
      if (lookahead == 'g') ADVANCE(608);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 509:
      if (lookahead == 'u') ADVANCE(611);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(612);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(613);
      END_STATE();
    case 512:
      if (lookahead == '_') ADVANCE(614);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_common);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(617);
      END_STATE();
    case 517:
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 518:
      if (lookahead == 'v') ADVANCE(620);
      if (lookahead == 'x') ADVANCE(621);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 520:
      if (lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 522:
      if (lookahead == 'p') ADVANCE(625);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_demote);
      if (lookahead == '_') ADVANCE(627);
      END_STATE();
    case 526:
      if (lookahead == 's') ADVANCE(628);
      END_STATE();
    case 527:
      if (lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 528:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_enable);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 532:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_extern);
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 536:
      if (lookahead == 'y') ADVANCE(635);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_friend);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(637);
      END_STATE();
    case 540:
      if (lookahead == 'h') ADVANCE(638);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(640);
      END_STATE();
    case 545:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 547:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_layout);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(645);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(646);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 553:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 554:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 555:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 556:
      if (lookahead == 'p') ADVANCE(650);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 559:
      if (lookahead == 'p') ADVANCE(653);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(655);
      END_STATE();
    case 562:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 563:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(658);
      END_STATE();
    case 565:
      if (lookahead == 'i') ADVANCE(659);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 567:
      if (lookahead == 'e') ADVANCE(661);
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 568:
      if (lookahead == 'g') ADVANCE(663);
      END_STATE();
    case 569:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(665);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(666);
      END_STATE();
    case 573:
      if (lookahead == 'e') ADVANCE(667);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 575:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(670);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(671);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_shared);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_smooth);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_') ADVANCE(672);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_target);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 588:
      if (lookahead == '_') ADVANCE(675);
      END_STATE();
    case 589:
      if (lookahead == 'f') ADVANCE(676);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_typeid);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(677);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_typeof);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_unsafe);
      END_STATE();
    case 595:
      if (lookahead == 'd') ADVANCE(678);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(679);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_vertex);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(680);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(681);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(682);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 602:
      if (lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_alignas);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_alignof);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(686);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(687);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_binding);
      if (lookahead == '_') ADVANCE(688);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_builtin);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(690);
      END_STATE();
    case 612:
      if (lookahead == 'd') ADVANCE(691);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(692);
      END_STATE();
    case 614:
      if (lookahead == 'm') ADVANCE(693);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_compile);
      if (lookahead == '_') ADVANCE(694);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_compute);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_concept);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(695);
      END_STATE();
    case 619:
      if (lookahead == 'a') ADVANCE(696);
      END_STATE();
    case 620:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(698);
      END_STATE();
    case 622:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 623:
      if (lookahead == 'e') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 624:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 625:
      if (lookahead == 'e') ADVANCE(703);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 630:
      if (lookahead == '_') ADVANCE(706);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 633:
      if (lookahead == 'l') ADVANCE(708);
      END_STATE();
    case 634:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(710);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_fxgroup);
      END_STATE();
    case 638:
      if (lookahead == 'a') ADVANCE(711);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(712);
      END_STATE();
    case 640:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 641:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 642:
      if (lookahead == 'l') ADVANCE(715);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 645:
      if (lookahead == 'u') ADVANCE(718);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_mediump);
      END_STATE();
    case 647:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_mutable);
      END_STATE();
    case 649:
      if (lookahead == 'c') ADVANCE(720);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 651:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 652:
      if (lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 653:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_nullptr);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 656:
      if (lookahead == 'e') ADVANCE(726);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 658:
      if (lookahead == 's') ADVANCE(727);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 660:
      if (lookahead == 'a') ADVANCE(729);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_precise);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 663:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 664:
      if (lookahead == 'e') ADVANCE(732);
      END_STATE();
    case 665:
      if (lookahead == 'y') ADVANCE(733);
      END_STATE();
    case 666:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 668:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 670:
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 672:
      if (lookahead == 'a') ADVANCE(739);
      if (lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 674:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 675:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_typedef);
      END_STATE();
    case 677:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_unsized);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_varying);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_virtual);
      END_STATE();
    case 681:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_warning);
      END_STATE();
    case 683:
      if (lookahead == 'u') ADVANCE(746);
      END_STATE();
    case 684:
      if (lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 686:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 687:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 688:
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_co_await);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_co_yield);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_coherent);
      END_STATE();
    case 693:
      if (lookahead == 'a') ADVANCE(752);
      END_STATE();
    case 694:
      if (lookahead == 'f') ADVANCE(753);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(755);
      END_STATE();
    case 697:
      if (lookahead == 'l') ADVANCE(756);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 699:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_continue_statement);
      END_STATE();
    case 701:
      if (lookahead == 'n') ADVANCE(759);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_debugger);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_decltype);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 705:
      if (lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 706:
      if (lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_explicit);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_external);
      END_STATE();
    case 709:
      if (lookahead == 'u') ADVANCE(763);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_fragment);
      END_STATE();
    case 711:
      if (lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(766);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(767);
      END_STATE();
    case 715:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_location);
      END_STATE();
    case 718:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_must_use);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_noexcept);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_noinline);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(772);
      END_STATE();
    case 724:
      if (lookahead == 'c') ADVANCE(773);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_operator);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(774);
      END_STATE();
    case 728:
      if (lookahead == 'n') ADVANCE(775);
      END_STATE();
    case 729:
      if (lookahead == 'g') ADVANCE(776);
      END_STATE();
    case 730:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_premerge);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(778);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_readonly);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(779);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_register);
      END_STATE();
    case 736:
      if (lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_resource);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 739:
      if (lookahead == 's') ADVANCE(781);
      END_STATE();
    case 740:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 741:
      if (lookahead == 'n') ADVANCE(783);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 743:
      if (lookahead == 'o') ADVANCE(784);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_typename);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 746:
      if (lookahead == 'p') ADVANCE(785);
      END_STATE();
    case 747:
      if (lookahead == 'y') ADVANCE(786);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_attribute);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_co_return);
      END_STATE();
    case 752:
      if (lookahead == 'j') ADVANCE(789);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(791);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_consteval);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_constexpr);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_constinit);
      END_STATE();
    case 759:
      if (lookahead == 'g') ADVANCE(793);
      END_STATE();
    case 760:
      if (lookahead == '_') ADVANCE(794);
      END_STATE();
    case 761:
      if (lookahead == 'c') ADVANCE(795);
      END_STATE();
    case 762:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 763:
      if (lookahead == 'g') ADVANCE(797);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 765:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 766:
      if (lookahead == 'f') ADVANCE(800);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_invariant);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 772:
      if (lookahead == 'l') ADVANCE(803);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_partition);
      END_STATE();
    case 776:
      if (lookahead == 'm') ADVANCE(806);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_precision);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_protected);
      END_STATE();
    case 779:
      if (lookahead == 's') ADVANCE(807);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 781:
      if (lookahead == 's') ADVANCE(809);
      END_STATE();
    case 782:
      if (lookahead == 's') ADVANCE(810);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 784:
      if (lookahead == 'c') ADVANCE(812);
      END_STATE();
    case 785:
      if (lookahead == '_') ADVANCE(813);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_writeonly);
      END_STATE();
    case 787:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(815);
      END_STATE();
    case 789:
      if (lookahead == 'o') ADVANCE(816);
      END_STATE();
    case 790:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_const_cast);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_continuing);
      END_STATE();
    case 794:
      if (lookahead == 'h') ADVANCE(819);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_diagnostic);
      END_STATE();
    case 796:
      if (lookahead == 's') ADVANCE(820);
      END_STATE();
    case 797:
      if (lookahead == 'h') ADVANCE(821);
      END_STATE();
    case 798:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_implements);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_instanceof);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 802:
      if (lookahead == 's') ADVANCE(824);
      END_STATE();
    case 803:
      if (lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 804:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_packoffset);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_regardless);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(828);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(830);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_subroutine);
      END_STATE();
    case 812:
      if (lookahead == 'a') ADVANCE(831);
      END_STATE();
    case 813:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 815:
      if (lookahead == 'a') ADVANCE(834);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(835);
      END_STATE();
    case 817:
      if (lookahead == 'g') ADVANCE(836);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(837);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_fallthrough);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_groupshared);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_interpolate);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_macro_rules);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 826:
      if (lookahead == 'v') ADVANCE(841);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(842);
      END_STATE();
    case 828:
      if (lookahead == '_') ADVANCE(843);
      END_STATE();
    case 829:
      if (lookahead == 'r') ADVANCE(844);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_static_cast);
      END_STATE();
    case 831:
      if (lookahead == 'l') ADVANCE(845);
      END_STATE();
    case 832:
      if (lookahead == 'i') ADVANCE(846);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_asm_fragment);
      END_STATE();
    case 834:
      if (lookahead == 'y') ADVANCE(847);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_column_major);
      END_STATE();
    case 836:
      if (lookahead == 'm') ADVANCE(848);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_const_assert);
      END_STATE();
    case 838:
      if (lookahead == 'l') ADVANCE(849);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_dynamic_cast);
      END_STATE();
    case 840:
      if (lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(852);
      END_STATE();
    case 843:
      if (lookahead == 'c') ADVANCE(853);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(854);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_thread_local);
      END_STATE();
    case 846:
      if (lookahead == 'z') ADVANCE(855);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_binding_array);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 849:
      if (lookahead == 'p') ADVANCE(857);
      END_STATE();
    case 850:
      if (lookahead == 'o') ADVANCE(858);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_noperspective);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_pixelfragment);
      END_STATE();
    case 853:
      if (lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_static_assert);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(861);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(863);
      END_STATE();
    case 859:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_workgroup_size);
      END_STATE();
    case 861:
      if (lookahead == 't') ADVANCE(865);
      END_STATE();
    case 862:
      if (lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_nointerpolation);
      END_STATE();
    case 864:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_compile_fragment);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_demote_to_helper);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_reinterpret_cast);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 1},
  [2] = {.lex_state = 36, .external_lex_state = 1},
  [3] = {.lex_state = 36, .external_lex_state = 1},
  [4] = {.lex_state = 36, .external_lex_state = 1},
  [5] = {.lex_state = 36, .external_lex_state = 1},
  [6] = {.lex_state = 36, .external_lex_state = 1},
  [7] = {.lex_state = 36, .external_lex_state = 1},
  [8] = {.lex_state = 36, .external_lex_state = 1},
  [9] = {.lex_state = 36, .external_lex_state = 1},
  [10] = {.lex_state = 36, .external_lex_state = 1},
  [11] = {.lex_state = 36, .external_lex_state = 1},
  [12] = {.lex_state = 36, .external_lex_state = 1},
  [13] = {.lex_state = 36, .external_lex_state = 1},
  [14] = {.lex_state = 36, .external_lex_state = 1},
  [15] = {.lex_state = 36, .external_lex_state = 1},
  [16] = {.lex_state = 36, .external_lex_state = 1},
  [17] = {.lex_state = 36, .external_lex_state = 1},
  [18] = {.lex_state = 36, .external_lex_state = 1},
  [19] = {.lex_state = 36, .external_lex_state = 1},
  [20] = {.lex_state = 36, .external_lex_state = 1},
  [21] = {.lex_state = 36, .external_lex_state = 1},
  [22] = {.lex_state = 36, .external_lex_state = 1},
  [23] = {.lex_state = 36, .external_lex_state = 1},
  [24] = {.lex_state = 36, .external_lex_state = 1},
  [25] = {.lex_state = 36, .external_lex_state = 1},
  [26] = {.lex_state = 36, .external_lex_state = 1},
  [27] = {.lex_state = 36, .external_lex_state = 1},
  [28] = {.lex_state = 36, .external_lex_state = 1},
  [29] = {.lex_state = 36, .external_lex_state = 1},
  [30] = {.lex_state = 36, .external_lex_state = 1},
  [31] = {.lex_state = 36, .external_lex_state = 1},
  [32] = {.lex_state = 36, .external_lex_state = 1},
  [33] = {.lex_state = 36, .external_lex_state = 1},
  [34] = {.lex_state = 36, .external_lex_state = 1},
  [35] = {.lex_state = 36, .external_lex_state = 1},
  [36] = {.lex_state = 36, .external_lex_state = 1},
  [37] = {.lex_state = 36, .external_lex_state = 1},
  [38] = {.lex_state = 36, .external_lex_state = 1},
  [39] = {.lex_state = 36, .external_lex_state = 1},
  [40] = {.lex_state = 36, .external_lex_state = 1},
  [41] = {.lex_state = 36, .external_lex_state = 1},
  [42] = {.lex_state = 36, .external_lex_state = 1},
  [43] = {.lex_state = 36, .external_lex_state = 1},
  [44] = {.lex_state = 36, .external_lex_state = 1},
  [45] = {.lex_state = 36, .external_lex_state = 1},
  [46] = {.lex_state = 36, .external_lex_state = 1},
  [47] = {.lex_state = 36, .external_lex_state = 1},
  [48] = {.lex_state = 36, .external_lex_state = 1},
  [49] = {.lex_state = 36, .external_lex_state = 1},
  [50] = {.lex_state = 36, .external_lex_state = 1},
  [51] = {.lex_state = 36, .external_lex_state = 1},
  [52] = {.lex_state = 36, .external_lex_state = 1},
  [53] = {.lex_state = 36, .external_lex_state = 1},
  [54] = {.lex_state = 36, .external_lex_state = 1},
  [55] = {.lex_state = 36, .external_lex_state = 1},
  [56] = {.lex_state = 36, .external_lex_state = 1},
  [57] = {.lex_state = 36, .external_lex_state = 1},
  [58] = {.lex_state = 36, .external_lex_state = 1},
  [59] = {.lex_state = 36, .external_lex_state = 1},
  [60] = {.lex_state = 36, .external_lex_state = 1},
  [61] = {.lex_state = 36, .external_lex_state = 1},
  [62] = {.lex_state = 36, .external_lex_state = 1},
  [63] = {.lex_state = 36, .external_lex_state = 1},
  [64] = {.lex_state = 36, .external_lex_state = 1},
  [65] = {.lex_state = 36, .external_lex_state = 1},
  [66] = {.lex_state = 36, .external_lex_state = 1},
  [67] = {.lex_state = 36, .external_lex_state = 1},
  [68] = {.lex_state = 36, .external_lex_state = 1},
  [69] = {.lex_state = 36, .external_lex_state = 1},
  [70] = {.lex_state = 36, .external_lex_state = 1},
  [71] = {.lex_state = 36, .external_lex_state = 1},
  [72] = {.lex_state = 36, .external_lex_state = 1},
  [73] = {.lex_state = 36, .external_lex_state = 1},
  [74] = {.lex_state = 36, .external_lex_state = 1},
  [75] = {.lex_state = 36, .external_lex_state = 1},
  [76] = {.lex_state = 36, .external_lex_state = 1},
  [77] = {.lex_state = 36, .external_lex_state = 1},
  [78] = {.lex_state = 36, .external_lex_state = 1},
  [79] = {.lex_state = 36, .external_lex_state = 1},
  [80] = {.lex_state = 36, .external_lex_state = 1},
  [81] = {.lex_state = 36, .external_lex_state = 1},
  [82] = {.lex_state = 36, .external_lex_state = 1},
  [83] = {.lex_state = 36, .external_lex_state = 1},
  [84] = {.lex_state = 36, .external_lex_state = 1},
  [85] = {.lex_state = 36, .external_lex_state = 1},
  [86] = {.lex_state = 36, .external_lex_state = 1},
  [87] = {.lex_state = 36, .external_lex_state = 1},
  [88] = {.lex_state = 36, .external_lex_state = 1},
  [89] = {.lex_state = 36, .external_lex_state = 1},
  [90] = {.lex_state = 1, .external_lex_state = 1},
  [91] = {.lex_state = 1, .external_lex_state = 1},
  [92] = {.lex_state = 36, .external_lex_state = 1},
  [93] = {.lex_state = 1, .external_lex_state = 1},
  [94] = {.lex_state = 1, .external_lex_state = 1},
  [95] = {.lex_state = 36, .external_lex_state = 1},
  [96] = {.lex_state = 2, .external_lex_state = 1},
  [97] = {.lex_state = 1, .external_lex_state = 1},
  [98] = {.lex_state = 36, .external_lex_state = 1},
  [99] = {.lex_state = 1, .external_lex_state = 1},
  [100] = {.lex_state = 1, .external_lex_state = 1},
  [101] = {.lex_state = 2, .external_lex_state = 1},
  [102] = {.lex_state = 2, .external_lex_state = 1},
  [103] = {.lex_state = 2, .external_lex_state = 1},
  [104] = {.lex_state = 36, .external_lex_state = 1},
  [105] = {.lex_state = 2, .external_lex_state = 1},
  [106] = {.lex_state = 2, .external_lex_state = 1},
  [107] = {.lex_state = 2, .external_lex_state = 1},
  [108] = {.lex_state = 2, .external_lex_state = 1},
  [109] = {.lex_state = 2, .external_lex_state = 1},
  [110] = {.lex_state = 2, .external_lex_state = 1},
  [111] = {.lex_state = 2, .external_lex_state = 1},
  [112] = {.lex_state = 2, .external_lex_state = 1},
  [113] = {.lex_state = 2, .external_lex_state = 1},
  [114] = {.lex_state = 2, .external_lex_state = 1},
  [115] = {.lex_state = 2, .external_lex_state = 1},
  [116] = {.lex_state = 2, .external_lex_state = 1},
  [117] = {.lex_state = 2, .external_lex_state = 1},
  [118] = {.lex_state = 2, .external_lex_state = 1},
  [119] = {.lex_state = 2, .external_lex_state = 1},
  [120] = {.lex_state = 2, .external_lex_state = 1},
  [121] = {.lex_state = 2, .external_lex_state = 1},
  [122] = {.lex_state = 3, .external_lex_state = 1},
  [123] = {.lex_state = 3, .external_lex_state = 1},
  [124] = {.lex_state = 2, .external_lex_state = 1},
  [125] = {.lex_state = 2, .external_lex_state = 1},
  [126] = {.lex_state = 2, .external_lex_state = 1},
  [127] = {.lex_state = 2, .external_lex_state = 1},
  [128] = {.lex_state = 2, .external_lex_state = 1},
  [129] = {.lex_state = 2, .external_lex_state = 1},
  [130] = {.lex_state = 2, .external_lex_state = 1},
  [131] = {.lex_state = 2, .external_lex_state = 1},
  [132] = {.lex_state = 2, .external_lex_state = 1},
  [133] = {.lex_state = 2, .external_lex_state = 1},
  [134] = {.lex_state = 2, .external_lex_state = 1},
  [135] = {.lex_state = 2, .external_lex_state = 1},
  [136] = {.lex_state = 2, .external_lex_state = 1},
  [137] = {.lex_state = 36, .external_lex_state = 1},
  [138] = {.lex_state = 3, .external_lex_state = 1},
  [139] = {.lex_state = 3, .external_lex_state = 1},
  [140] = {.lex_state = 36, .external_lex_state = 1},
  [141] = {.lex_state = 3, .external_lex_state = 1},
  [142] = {.lex_state = 36, .external_lex_state = 1},
  [143] = {.lex_state = 3, .external_lex_state = 1},
  [144] = {.lex_state = 3, .external_lex_state = 1},
  [145] = {.lex_state = 3, .external_lex_state = 1},
  [146] = {.lex_state = 3, .external_lex_state = 1},
  [147] = {.lex_state = 3, .external_lex_state = 1},
  [148] = {.lex_state = 36, .external_lex_state = 1},
  [149] = {.lex_state = 36, .external_lex_state = 1},
  [150] = {.lex_state = 2, .external_lex_state = 1},
  [151] = {.lex_state = 36, .external_lex_state = 1},
  [152] = {.lex_state = 36, .external_lex_state = 1},
  [153] = {.lex_state = 36, .external_lex_state = 1},
  [154] = {.lex_state = 36, .external_lex_state = 1},
  [155] = {.lex_state = 36, .external_lex_state = 1},
  [156] = {.lex_state = 36, .external_lex_state = 1},
  [157] = {.lex_state = 36, .external_lex_state = 1},
  [158] = {.lex_state = 36, .external_lex_state = 1},
  [159] = {.lex_state = 36, .external_lex_state = 1},
  [160] = {.lex_state = 36, .external_lex_state = 1},
  [161] = {.lex_state = 2, .external_lex_state = 1},
  [162] = {.lex_state = 3, .external_lex_state = 1},
  [163] = {.lex_state = 36, .external_lex_state = 1},
  [164] = {.lex_state = 2, .external_lex_state = 1},
  [165] = {.lex_state = 36, .external_lex_state = 1},
  [166] = {.lex_state = 36, .external_lex_state = 1},
  [167] = {.lex_state = 36, .external_lex_state = 1},
  [168] = {.lex_state = 2, .external_lex_state = 1},
  [169] = {.lex_state = 2, .external_lex_state = 1},
  [170] = {.lex_state = 2, .external_lex_state = 1},
  [171] = {.lex_state = 3, .external_lex_state = 1},
  [172] = {.lex_state = 36, .external_lex_state = 1},
  [173] = {.lex_state = 2, .external_lex_state = 1},
  [174] = {.lex_state = 3, .external_lex_state = 1},
  [175] = {.lex_state = 36, .external_lex_state = 1},
  [176] = {.lex_state = 3, .external_lex_state = 1},
  [177] = {.lex_state = 3, .external_lex_state = 1},
  [178] = {.lex_state = 36, .external_lex_state = 1},
  [179] = {.lex_state = 2, .external_lex_state = 1},
  [180] = {.lex_state = 3, .external_lex_state = 1},
  [181] = {.lex_state = 3, .external_lex_state = 1},
  [182] = {.lex_state = 3, .external_lex_state = 1},
  [183] = {.lex_state = 3, .external_lex_state = 1},
  [184] = {.lex_state = 3, .external_lex_state = 1},
  [185] = {.lex_state = 3, .external_lex_state = 1},
  [186] = {.lex_state = 3, .external_lex_state = 1},
  [187] = {.lex_state = 3, .external_lex_state = 1},
  [188] = {.lex_state = 3, .external_lex_state = 1},
  [189] = {.lex_state = 36, .external_lex_state = 1},
  [190] = {.lex_state = 3, .external_lex_state = 1},
  [191] = {.lex_state = 3, .external_lex_state = 1},
  [192] = {.lex_state = 3, .external_lex_state = 1},
  [193] = {.lex_state = 3, .external_lex_state = 1},
  [194] = {.lex_state = 3, .external_lex_state = 1},
  [195] = {.lex_state = 2, .external_lex_state = 1},
  [196] = {.lex_state = 2, .external_lex_state = 1},
  [197] = {.lex_state = 2, .external_lex_state = 1},
  [198] = {.lex_state = 2, .external_lex_state = 1},
  [199] = {.lex_state = 2, .external_lex_state = 1},
  [200] = {.lex_state = 2, .external_lex_state = 1},
  [201] = {.lex_state = 3, .external_lex_state = 1},
  [202] = {.lex_state = 2, .external_lex_state = 1},
  [203] = {.lex_state = 3, .external_lex_state = 1},
  [204] = {.lex_state = 2, .external_lex_state = 1},
  [205] = {.lex_state = 3, .external_lex_state = 1},
  [206] = {.lex_state = 3, .external_lex_state = 1},
  [207] = {.lex_state = 36, .external_lex_state = 1},
  [208] = {.lex_state = 3, .external_lex_state = 1},
  [209] = {.lex_state = 3, .external_lex_state = 1},
  [210] = {.lex_state = 36, .external_lex_state = 1},
  [211] = {.lex_state = 36, .external_lex_state = 1},
  [212] = {.lex_state = 3, .external_lex_state = 1},
  [213] = {.lex_state = 3, .external_lex_state = 1},
  [214] = {.lex_state = 3, .external_lex_state = 1},
  [215] = {.lex_state = 3, .external_lex_state = 1},
  [216] = {.lex_state = 2, .external_lex_state = 1},
  [217] = {.lex_state = 3, .external_lex_state = 1},
  [218] = {.lex_state = 3, .external_lex_state = 1},
  [219] = {.lex_state = 3, .external_lex_state = 1},
  [220] = {.lex_state = 3, .external_lex_state = 1},
  [221] = {.lex_state = 4, .external_lex_state = 1},
  [222] = {.lex_state = 2, .external_lex_state = 1},
  [223] = {.lex_state = 3, .external_lex_state = 1},
  [224] = {.lex_state = 3, .external_lex_state = 1},
  [225] = {.lex_state = 36, .external_lex_state = 1},
  [226] = {.lex_state = 2, .external_lex_state = 1},
  [227] = {.lex_state = 2, .external_lex_state = 1},
  [228] = {.lex_state = 2, .external_lex_state = 1},
  [229] = {.lex_state = 2, .external_lex_state = 1},
  [230] = {.lex_state = 2, .external_lex_state = 1},
  [231] = {.lex_state = 2, .external_lex_state = 1},
  [232] = {.lex_state = 2, .external_lex_state = 1},
  [233] = {.lex_state = 2, .external_lex_state = 1},
  [234] = {.lex_state = 2, .external_lex_state = 1},
  [235] = {.lex_state = 2, .external_lex_state = 1},
  [236] = {.lex_state = 2, .external_lex_state = 1},
  [237] = {.lex_state = 2, .external_lex_state = 1},
  [238] = {.lex_state = 2, .external_lex_state = 1},
  [239] = {.lex_state = 2, .external_lex_state = 1},
  [240] = {.lex_state = 2, .external_lex_state = 1},
  [241] = {.lex_state = 2, .external_lex_state = 1},
  [242] = {.lex_state = 36, .external_lex_state = 1},
  [243] = {.lex_state = 4, .external_lex_state = 1},
  [244] = {.lex_state = 4, .external_lex_state = 1},
  [245] = {.lex_state = 4, .external_lex_state = 1},
  [246] = {.lex_state = 36, .external_lex_state = 1},
  [247] = {.lex_state = 36, .external_lex_state = 1},
  [248] = {.lex_state = 4, .external_lex_state = 1},
  [249] = {.lex_state = 36, .external_lex_state = 1},
  [250] = {.lex_state = 4, .external_lex_state = 1},
  [251] = {.lex_state = 36, .external_lex_state = 1},
  [252] = {.lex_state = 4, .external_lex_state = 1},
  [253] = {.lex_state = 4, .external_lex_state = 1},
  [254] = {.lex_state = 4, .external_lex_state = 1},
  [255] = {.lex_state = 4, .external_lex_state = 1},
  [256] = {.lex_state = 4, .external_lex_state = 1},
  [257] = {.lex_state = 4, .external_lex_state = 1},
  [258] = {.lex_state = 4, .external_lex_state = 1},
  [259] = {.lex_state = 36, .external_lex_state = 1},
  [260] = {.lex_state = 36, .external_lex_state = 1},
  [261] = {.lex_state = 36, .external_lex_state = 1},
  [262] = {.lex_state = 36, .external_lex_state = 1},
  [263] = {.lex_state = 36, .external_lex_state = 1},
  [264] = {.lex_state = 36, .external_lex_state = 1},
  [265] = {.lex_state = 36, .external_lex_state = 1},
  [266] = {.lex_state = 36, .external_lex_state = 1},
  [267] = {.lex_state = 36, .external_lex_state = 1},
  [268] = {.lex_state = 36, .external_lex_state = 1},
  [269] = {.lex_state = 36, .external_lex_state = 1},
  [270] = {.lex_state = 36, .external_lex_state = 1},
  [271] = {.lex_state = 36, .external_lex_state = 1},
  [272] = {.lex_state = 36, .external_lex_state = 1},
  [273] = {.lex_state = 36, .external_lex_state = 1},
  [274] = {.lex_state = 36, .external_lex_state = 1},
  [275] = {.lex_state = 36, .external_lex_state = 1},
  [276] = {.lex_state = 36, .external_lex_state = 1},
  [277] = {.lex_state = 36, .external_lex_state = 1},
  [278] = {.lex_state = 36, .external_lex_state = 1},
  [279] = {.lex_state = 36, .external_lex_state = 1},
  [280] = {.lex_state = 36, .external_lex_state = 1},
  [281] = {.lex_state = 36, .external_lex_state = 1},
  [282] = {.lex_state = 36, .external_lex_state = 1},
  [283] = {.lex_state = 36, .external_lex_state = 1},
  [284] = {.lex_state = 36, .external_lex_state = 1},
  [285] = {.lex_state = 36, .external_lex_state = 1},
  [286] = {.lex_state = 36, .external_lex_state = 1},
  [287] = {.lex_state = 36, .external_lex_state = 1},
  [288] = {.lex_state = 36, .external_lex_state = 1},
  [289] = {.lex_state = 36, .external_lex_state = 1},
  [290] = {.lex_state = 36, .external_lex_state = 1},
  [291] = {.lex_state = 36, .external_lex_state = 1},
  [292] = {.lex_state = 36, .external_lex_state = 1},
  [293] = {.lex_state = 36, .external_lex_state = 1},
  [294] = {.lex_state = 36, .external_lex_state = 1},
  [295] = {.lex_state = 36, .external_lex_state = 1},
  [296] = {.lex_state = 36, .external_lex_state = 1},
  [297] = {.lex_state = 36, .external_lex_state = 1},
  [298] = {.lex_state = 36, .external_lex_state = 1},
  [299] = {.lex_state = 36, .external_lex_state = 1},
  [300] = {.lex_state = 36, .external_lex_state = 1},
  [301] = {.lex_state = 36, .external_lex_state = 1},
  [302] = {.lex_state = 36, .external_lex_state = 1},
  [303] = {.lex_state = 36, .external_lex_state = 1},
  [304] = {.lex_state = 36, .external_lex_state = 1},
  [305] = {.lex_state = 36, .external_lex_state = 1},
  [306] = {.lex_state = 4, .external_lex_state = 1},
  [307] = {.lex_state = 36, .external_lex_state = 1},
  [308] = {.lex_state = 36, .external_lex_state = 1},
  [309] = {.lex_state = 4, .external_lex_state = 1},
  [310] = {.lex_state = 36, .external_lex_state = 1},
  [311] = {.lex_state = 4, .external_lex_state = 1},
  [312] = {.lex_state = 4, .external_lex_state = 1},
  [313] = {.lex_state = 36, .external_lex_state = 1},
  [314] = {.lex_state = 36, .external_lex_state = 1},
  [315] = {.lex_state = 0, .external_lex_state = 1},
  [316] = {.lex_state = 36, .external_lex_state = 1},
  [317] = {.lex_state = 36, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 36, .external_lex_state = 1},
  [320] = {.lex_state = 36, .external_lex_state = 1},
  [321] = {.lex_state = 36, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 1, .external_lex_state = 1},
  [324] = {.lex_state = 0, .external_lex_state = 1},
  [325] = {.lex_state = 36, .external_lex_state = 1},
  [326] = {.lex_state = 36, .external_lex_state = 1},
  [327] = {.lex_state = 36, .external_lex_state = 1},
  [328] = {.lex_state = 0, .external_lex_state = 1},
  [329] = {.lex_state = 0, .external_lex_state = 1},
  [330] = {.lex_state = 36, .external_lex_state = 1},
  [331] = {.lex_state = 36, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 0, .external_lex_state = 1},
  [335] = {.lex_state = 36, .external_lex_state = 1},
  [336] = {.lex_state = 36, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 36, .external_lex_state = 1},
  [339] = {.lex_state = 36, .external_lex_state = 1},
  [340] = {.lex_state = 1, .external_lex_state = 1},
  [341] = {.lex_state = 36, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 36, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 36, .external_lex_state = 1},
  [346] = {.lex_state = 36, .external_lex_state = 1},
  [347] = {.lex_state = 0, .external_lex_state = 1},
  [348] = {.lex_state = 36, .external_lex_state = 1},
  [349] = {.lex_state = 0, .external_lex_state = 1},
  [350] = {.lex_state = 1, .external_lex_state = 1},
  [351] = {.lex_state = 0, .external_lex_state = 1},
  [352] = {.lex_state = 36, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 1},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 36, .external_lex_state = 1},
  [356] = {.lex_state = 36, .external_lex_state = 1},
  [357] = {.lex_state = 0, .external_lex_state = 1},
  [358] = {.lex_state = 1, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
  [360] = {.lex_state = 0, .external_lex_state = 1},
  [361] = {.lex_state = 0, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 36, .external_lex_state = 1},
  [364] = {.lex_state = 0, .external_lex_state = 1},
  [365] = {.lex_state = 0, .external_lex_state = 1},
  [366] = {.lex_state = 36, .external_lex_state = 1},
  [367] = {.lex_state = 36, .external_lex_state = 1},
  [368] = {.lex_state = 36, .external_lex_state = 1},
  [369] = {.lex_state = 0, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 1},
  [372] = {.lex_state = 36, .external_lex_state = 1},
  [373] = {.lex_state = 0, .external_lex_state = 1},
  [374] = {.lex_state = 0, .external_lex_state = 1},
  [375] = {.lex_state = 36, .external_lex_state = 1},
  [376] = {.lex_state = 36, .external_lex_state = 1},
  [377] = {.lex_state = 0, .external_lex_state = 1},
  [378] = {.lex_state = 0, .external_lex_state = 1},
  [379] = {.lex_state = 36, .external_lex_state = 1},
  [380] = {.lex_state = 36, .external_lex_state = 1},
  [381] = {.lex_state = 36, .external_lex_state = 1},
  [382] = {.lex_state = 0, .external_lex_state = 1},
  [383] = {.lex_state = 36, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 0, .external_lex_state = 1},
  [386] = {.lex_state = 0, .external_lex_state = 1},
  [387] = {.lex_state = 0, .external_lex_state = 1},
  [388] = {.lex_state = 36, .external_lex_state = 1},
  [389] = {.lex_state = 36, .external_lex_state = 1},
  [390] = {.lex_state = 36, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 36, .external_lex_state = 1},
  [393] = {.lex_state = 0, .external_lex_state = 1},
  [394] = {.lex_state = 36, .external_lex_state = 1},
  [395] = {.lex_state = 36, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 36, .external_lex_state = 1},
  [398] = {.lex_state = 36, .external_lex_state = 1},
  [399] = {.lex_state = 36, .external_lex_state = 1},
  [400] = {.lex_state = 36, .external_lex_state = 1},
  [401] = {.lex_state = 36, .external_lex_state = 1},
  [402] = {.lex_state = 36, .external_lex_state = 1},
  [403] = {.lex_state = 36, .external_lex_state = 1},
  [404] = {.lex_state = 0, .external_lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 1},
  [406] = {.lex_state = 1, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 36, .external_lex_state = 1},
  [409] = {.lex_state = 36, .external_lex_state = 1},
  [410] = {.lex_state = 0, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 36, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 36, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 36, .external_lex_state = 1},
  [418] = {.lex_state = 36, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 0, .external_lex_state = 1},
  [422] = {.lex_state = 36, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 36, .external_lex_state = 1},
  [425] = {.lex_state = 36, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 36, .external_lex_state = 1},
  [428] = {.lex_state = 36, .external_lex_state = 1},
  [429] = {.lex_state = 0, .external_lex_state = 1},
  [430] = {.lex_state = 36, .external_lex_state = 1},
  [431] = {.lex_state = 36, .external_lex_state = 1},
  [432] = {.lex_state = 36, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 36, .external_lex_state = 1},
  [436] = {.lex_state = 36, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 1},
  [438] = {.lex_state = 36, .external_lex_state = 1},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 36, .external_lex_state = 1},
  [441] = {.lex_state = 36, .external_lex_state = 1},
  [442] = {.lex_state = 36, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 36, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 1},
  [447] = {.lex_state = 0, .external_lex_state = 1},
  [448] = {.lex_state = 0, .external_lex_state = 1},
  [449] = {.lex_state = 0, .external_lex_state = 1},
  [450] = {.lex_state = 0, .external_lex_state = 1},
  [451] = {.lex_state = 36, .external_lex_state = 1},
  [452] = {.lex_state = 36, .external_lex_state = 1},
  [453] = {.lex_state = 0, .external_lex_state = 1},
  [454] = {.lex_state = 0, .external_lex_state = 1},
  [455] = {.lex_state = 0, .external_lex_state = 1},
  [456] = {.lex_state = 0, .external_lex_state = 1},
  [457] = {.lex_state = 0, .external_lex_state = 1},
  [458] = {.lex_state = 0, .external_lex_state = 1},
  [459] = {.lex_state = 0, .external_lex_state = 1},
  [460] = {.lex_state = 0, .external_lex_state = 1},
  [461] = {.lex_state = 0, .external_lex_state = 1},
  [462] = {.lex_state = 36, .external_lex_state = 1},
  [463] = {.lex_state = 36, .external_lex_state = 1},
  [464] = {.lex_state = 0, .external_lex_state = 1},
  [465] = {.lex_state = 0, .external_lex_state = 1},
  [466] = {.lex_state = 0, .external_lex_state = 1},
  [467] = {.lex_state = 0, .external_lex_state = 1},
  [468] = {.lex_state = 0, .external_lex_state = 1},
  [469] = {.lex_state = 0, .external_lex_state = 1},
  [470] = {.lex_state = 0, .external_lex_state = 1},
  [471] = {.lex_state = 0, .external_lex_state = 1},
  [472] = {.lex_state = 0, .external_lex_state = 1},
  [473] = {.lex_state = 0, .external_lex_state = 1},
  [474] = {.lex_state = 36, .external_lex_state = 1},
  [475] = {.lex_state = 0, .external_lex_state = 1},
  [476] = {.lex_state = 134, .external_lex_state = 1},
  [477] = {.lex_state = 0, .external_lex_state = 1},
  [478] = {.lex_state = 0, .external_lex_state = 1},
  [479] = {.lex_state = 0, .external_lex_state = 1},
  [480] = {.lex_state = 0, .external_lex_state = 1},
  [481] = {.lex_state = 0, .external_lex_state = 1},
  [482] = {.lex_state = 36, .external_lex_state = 1},
  [483] = {.lex_state = 0, .external_lex_state = 1},
  [484] = {.lex_state = 0, .external_lex_state = 1},
  [485] = {.lex_state = 0, .external_lex_state = 1},
  [486] = {.lex_state = 0, .external_lex_state = 1},
  [487] = {.lex_state = 0, .external_lex_state = 1},
  [488] = {.lex_state = 0, .external_lex_state = 1},
  [489] = {.lex_state = 0, .external_lex_state = 1},
  [490] = {.lex_state = 36, .external_lex_state = 1},
  [491] = {.lex_state = 0, .external_lex_state = 1},
  [492] = {.lex_state = 0, .external_lex_state = 1},
  [493] = {.lex_state = 0, .external_lex_state = 1},
  [494] = {.lex_state = 36, .external_lex_state = 1},
  [495] = {.lex_state = 0, .external_lex_state = 1},
  [496] = {.lex_state = 0, .external_lex_state = 1},
  [497] = {.lex_state = 0, .external_lex_state = 1},
  [498] = {.lex_state = 36, .external_lex_state = 1},
  [499] = {.lex_state = 36, .external_lex_state = 1},
  [500] = {.lex_state = 36, .external_lex_state = 1},
  [501] = {.lex_state = 0, .external_lex_state = 1},
  [502] = {.lex_state = 36, .external_lex_state = 1},
  [503] = {.lex_state = 0, .external_lex_state = 1},
  [504] = {.lex_state = 0, .external_lex_state = 1},
  [505] = {.lex_state = 0, .external_lex_state = 1},
  [506] = {.lex_state = 36, .external_lex_state = 1},
  [507] = {.lex_state = 36, .external_lex_state = 1},
  [508] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym__decimal_int_literal_token1] = ACTIONS(1),
    [aux_sym__decimal_int_literal_token2] = ACTIONS(1),
    [sym__hex_int_literal] = ACTIONS(1),
    [aux_sym__decimal_float_literal_token1] = ACTIONS(1),
    [aux_sym__decimal_float_literal_token2] = ACTIONS(1),
    [aux_sym__decimal_float_literal_token3] = ACTIONS(1),
    [aux_sym__decimal_float_literal_token4] = ACTIONS(1),
    [aux_sym__decimal_float_literal_token5] = ACTIONS(1),
    [aux_sym__hex_float_literal_token1] = ACTIONS(1),
    [aux_sym__hex_float_literal_token2] = ACTIONS(1),
    [aux_sym__hex_float_literal_token3] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_enable] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_diagnostic] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT2] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [sym_continue_statement] = ACTIONS(1),
    [anon_sym_continuing] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_const_assert] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_binding] = ACTIONS(1),
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_interpolate] = ACTIONS(1),
    [anon_sym_invariant] = ACTIONS(1),
    [anon_sym_location] = ACTIONS(1),
    [anon_sym_must_use] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_workgroup_size] = ACTIONS(1),
    [anon_sym_vertex] = ACTIONS(1),
    [anon_sym_fragment] = ACTIONS(1),
    [anon_sym_compute] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_Self] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_active] = ACTIONS(1),
    [anon_sym_alignas] = ACTIONS(1),
    [anon_sym_alignof] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_asm] = ACTIONS(1),
    [anon_sym_asm_fragment] = ACTIONS(1),
    [anon_sym_async] = ACTIONS(1),
    [anon_sym_attribute] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_await] = ACTIONS(1),
    [anon_sym_become] = ACTIONS(1),
    [anon_sym_binding_array] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_co_await] = ACTIONS(1),
    [anon_sym_co_return] = ACTIONS(1),
    [anon_sym_co_yield] = ACTIONS(1),
    [anon_sym_coherent] = ACTIONS(1),
    [anon_sym_column_major] = ACTIONS(1),
    [anon_sym_common] = ACTIONS(1),
    [anon_sym_compile] = ACTIONS(1),
    [anon_sym_compile_fragment] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_const_cast] = ACTIONS(1),
    [anon_sym_consteval] = ACTIONS(1),
    [anon_sym_constexpr] = ACTIONS(1),
    [anon_sym_constinit] = ACTIONS(1),
    [anon_sym_crate] = ACTIONS(1),
    [anon_sym_debugger] = ACTIONS(1),
    [anon_sym_decltype] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_demote] = ACTIONS(1),
    [anon_sym_demote_to_helper] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_dynamic_cast] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_explicit] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_external] = ACTIONS(1),
    [anon_sym_fallthrough] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_final] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_friend] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_fxgroup] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_groupshared] = ACTIONS(1),
    [anon_sym_highp] = ACTIONS(1),
    [anon_sym_impl] = ACTIONS(1),
    [anon_sym_implements] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_instanceof] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_layout] = ACTIONS(1),
    [anon_sym_lowp] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_macro_rules] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_mediump] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_move] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_mutable] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_noexcept] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_nointerpolation] = ACTIONS(1),
    [anon_sym_noperspective] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nullptr] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_operator] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_packoffset] = ACTIONS(1),
    [anon_sym_partition] = ACTIONS(1),
    [anon_sym_pass] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_pixelfragment] = ACTIONS(1),
    [anon_sym_precise] = ACTIONS(1),
    [anon_sym_precision] = ACTIONS(1),
    [anon_sym_premerge] = ACTIONS(1),
    [anon_sym_priv] = ACTIONS(1),
    [anon_sym_protected] = ACTIONS(1),
    [anon_sym_pub] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_readonly] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_regardless] = ACTIONS(1),
    [anon_sym_register] = ACTIONS(1),
    [anon_sym_reinterpret_cast] = ACTIONS(1),
    [anon_sym_resource] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_self] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_shared] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [anon_sym_smooth] = ACTIONS(1),
    [anon_sym_snorm] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_static_assert] = ACTIONS(1),
    [anon_sym_static_cast] = ACTIONS(1),
    [anon_sym_std] = ACTIONS(1),
    [anon_sym_subroutine] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_target] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_this] = ACTIONS(1),
    [anon_sym_thread_local] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_trait] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_typedef] = ACTIONS(1),
    [anon_sym_typeid] = ACTIONS(1),
    [anon_sym_typename] = ACTIONS(1),
    [anon_sym_typeof] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_unorm] = ACTIONS(1),
    [anon_sym_unsafe] = ACTIONS(1),
    [anon_sym_unsized] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_varying] = ACTIONS(1),
    [anon_sym_virtual] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym_wgsl] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_writeonly] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [aux_sym_swizzle_name_token1] = ACTIONS(1),
    [aux_sym_swizzle_name_token2] = ACTIONS(1),
    [aux_sym_swizzle_name_token3] = ACTIONS(1),
    [aux_sym_swizzle_name_token4] = ACTIONS(1),
    [aux_sym_swizzle_name_token5] = ACTIONS(1),
    [aux_sym_swizzle_name_token6] = ACTIONS(1),
    [aux_sym_swizzle_name_token7] = ACTIONS(1),
    [aux_sym_swizzle_name_token8] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_translation_unit] = STATE(489),
    [sym_global_directive] = STATE(263),
    [sym_enable_directive] = STATE(265),
    [sym_requires_directive] = STATE(265),
    [sym_diagnostic_directive] = STATE(265),
    [sym_struct_decl] = STATE(288),
    [sym_type_alias_decl] = STATE(488),
    [sym_variable_decl] = STATE(418),
    [sym_global_variable_decl] = STATE(488),
    [sym_global_value_decl] = STATE(488),
    [sym_const_assert_statement] = STATE(488),
    [sym_function_decl] = STATE(288),
    [sym_attribute] = STATE(277),
    [sym__comment] = STATE(1),
    [aux_sym_translation_unit_repeat1] = STATE(104),
    [aux_sym_translation_unit_repeat2] = STATE(210),
    [aux_sym_struct_member_repeat1] = STATE(301),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_enable] = ACTIONS(11),
    [anon_sym_require] = ACTIONS(13),
    [anon_sym_diagnostic] = ACTIONS(15),
    [anon_sym_struct] = ACTIONS(17),
    [anon_sym_alias] = ACTIONS(19),
    [anon_sym_const] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_override] = ACTIONS(25),
    [anon_sym_const_assert] = ACTIONS(27),
    [anon_sym_fn] = ACTIONS(29),
    [anon_sym_AT] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym__blankspace] = ACTIONS(5),
    [sym__block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    STATE(2), 1,
      sym__comment,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(480), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [125] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym__comment,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(458), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [250] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym__comment,
    STATE(7), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(484), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [375] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_compound_statement_repeat1,
    STATE(5), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(458), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [500] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_compound_statement_repeat1,
    STATE(6), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(485), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [625] = 36,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(65), 1,
      anon_sym_continuing,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__comment,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(485), 1,
      sym_continuing_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [750] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_break,
    STATE(8), 1,
      sym__comment,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(486), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [872] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_break,
    STATE(9), 1,
      sym__comment,
    STATE(11), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(486), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [994] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(79), 1,
      anon_sym_break,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_compound_statement_repeat1,
    STATE(10), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(447), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1116] = 35,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(79), 1,
      anon_sym_break,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym__comment,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(475), 1,
      sym_break_if_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1238] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_var,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym__,
    ACTIONS(111), 1,
      anon_sym_if,
    ACTIONS(114), 1,
      anon_sym_switch,
    ACTIONS(117), 1,
      anon_sym_loop,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(123), 1,
      anon_sym_while,
    ACTIONS(126), 1,
      anon_sym_break,
    ACTIONS(132), 1,
      anon_sym_continuing,
    ACTIONS(134), 1,
      anon_sym_return,
    ACTIONS(137), 1,
      anon_sym_const_assert,
    ACTIONS(140), 1,
      anon_sym_AT,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(96), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(105), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(129), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(12), 2,
      sym__comment,
      aux_sym_compound_statement_repeat1,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1358] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(13), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1477] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym__comment,
    STATE(16), 1,
      aux_sym_compound_statement_repeat1,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1596] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_compound_statement_repeat1,
    STATE(15), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1715] = 34,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(51), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_switch,
    ACTIONS(55), 1,
      anon_sym_loop,
    ACTIONS(57), 1,
      anon_sym_for,
    ACTIONS(59), 1,
      anon_sym_while,
    ACTIONS(61), 1,
      anon_sym_break,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_const_assert,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_compound_statement_repeat1,
    STATE(16), 1,
      sym__comment,
    STATE(157), 1,
      sym__statement,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      aux_sym_struct_member_repeat1,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    ACTIONS(63), 2,
      sym_continue_statement,
      anon_sym_discard,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(155), 6,
      sym_compound_statement,
      sym_if_statement,
      sym_switch_statement,
      sym_loop_statement,
      sym_for_statement,
      sym_while_statement,
    STATE(455), 6,
      sym_variable_or_value_statement,
      sym_break_statement,
      sym_return_statement,
      sym_func_call_statement,
      sym_const_assert_statement,
      sym_variable_updating_statement,
  [1834] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_default,
    STATE(17), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(179), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    ACTIONS(165), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [1924] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_default,
    STATE(18), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(179), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    ACTIONS(173), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2014] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(191), 1,
      anon_sym_GT,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2102] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(197), 1,
      anon_sym_GT,
    STATE(20), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2190] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_GT,
    STATE(21), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2278] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_GT,
    STATE(22), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2366] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_GT,
    STATE(23), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2454] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      anon_sym_default,
    STATE(24), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(150), 1,
      sym__expression,
    STATE(315), 1,
      sym_case_selectors,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2542] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_GT,
    STATE(25), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2630] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_GT,
    STATE(26), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2718] = 23,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      anon_sym_GT,
    STATE(27), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2806] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(200), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2891] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(237), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [2976] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3061] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(199), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3146] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(212), 1,
      sym__expression,
    STATE(422), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3231] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(201), 1,
      sym__expression,
    STATE(381), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3316] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(195), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3401] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3486] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3571] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3656] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(226), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3741] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym__comment,
    STATE(122), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(203), 1,
      sym__expression,
    STATE(375), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3826] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(202), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3911] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(233), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [3996] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(196), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4081] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      anon_sym_default,
    STATE(43), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(179), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4166] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(130), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4248] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(169), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4330] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(161), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4412] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(170), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4494] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(164), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4576] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(214), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4658] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(213), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4740] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(209), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4822] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(208), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4904] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(229), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [4986] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(219), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5068] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(236), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5150] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(205), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5232] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(206), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5314] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(197), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5396] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(238), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5478] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(198), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5560] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(215), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5642] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(227), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5724] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(204), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5806] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(241), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5888] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(168), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [5970] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(231), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6052] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(124), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6134] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(222), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6216] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(232), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6298] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(216), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6380] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(127), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6462] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(230), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6544] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(235), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6626] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(128), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6708] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(218), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6790] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(76), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(131), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6872] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(132), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [6954] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(173), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7036] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(133), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7118] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(240), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7200] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(134), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7282] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(135), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7364] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(136), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7446] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(224), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7528] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(175), 1,
      sym_identifier,
    ACTIONS(181), 1,
      sym__hex_int_literal,
    ACTIONS(185), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(189), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(85), 1,
      sym__comment,
    STATE(123), 1,
      sym_template_elaborated_ident,
    STATE(181), 1,
      sym_call_phrase,
    STATE(184), 1,
      sym__decimal_int_literal,
    STATE(223), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(187), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(191), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(139), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(194), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(217), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(183), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(195), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7610] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(239), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7692] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(234), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7774] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(228), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7856] = 21,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym__hex_int_literal,
    ACTIONS(159), 1,
      aux_sym__decimal_float_literal_token4,
    ACTIONS(163), 1,
      aux_sym__hex_float_literal_token2,
    ACTIONS(167), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym__comment,
    STATE(96), 1,
      sym_template_elaborated_ident,
    STATE(109), 1,
      sym_call_phrase,
    STATE(119), 1,
      sym__decimal_int_literal,
    STATE(125), 1,
      sym__expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(151), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 2,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
    ACTIONS(161), 2,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
    STATE(111), 2,
      sym__decimal_float_literal,
      sym__hex_float_literal,
    STATE(101), 3,
      sym_literal,
      sym_call_expression,
      sym_paren_expression,
    STATE(112), 3,
      sym_bool_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(126), 3,
      sym_unary_expression,
      sym_singular_expression,
      sym_binary_expression,
    ACTIONS(157), 4,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
    ACTIONS(169), 5,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [7938] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(90), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(235), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(233), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [7984] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(91), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(239), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(237), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8030] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(92), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(243), 23,
      sym_identifier,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_override,
      anon_sym__,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
      anon_sym_fn,
  [8076] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(93), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(245), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8122] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(94), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(251), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(249), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8168] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(95), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(255), 23,
      sym_identifier,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_override,
      anon_sym__,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
      anon_sym_fn,
  [8214] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym__comment,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(106), 1,
      sym_argument_expression_list,
    STATE(129), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(257), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8272] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(97), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(269), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(267), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8318] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(98), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(273), 23,
      sym_identifier,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym_override,
      anon_sym__,
      anon_sym_if,
      anon_sym_else,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
      anon_sym_fn,
  [8364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(99), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(277), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(275), 25,
      anon_sym_SEMI,
      anon_sym_DOT,
      sym_identifier,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(100), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(281), 6,
      anon_sym_LT,
      anon_sym_EQ,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(279), 24,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8455] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(101), 1,
      sym__comment,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(129), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(257), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8507] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(288), 1,
      anon_sym_LT,
    STATE(100), 1,
      sym_template_list,
    STATE(102), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(286), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(292), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(283), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8557] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(297), 1,
      anon_sym_DOT,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(103), 2,
      sym__comment,
      aux_sym_component_or_swizzle_specifier_repeat1,
    ACTIONS(300), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(295), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8604] = 25,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_enable,
    ACTIONS(13), 1,
      anon_sym_require,
    ACTIONS(15), 1,
      anon_sym_diagnostic,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_override,
    ACTIONS(27), 1,
      anon_sym_const_assert,
    ACTIONS(29), 1,
      anon_sym_fn,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym__comment,
    STATE(211), 1,
      aux_sym_translation_unit_repeat2,
    STATE(242), 1,
      aux_sym_translation_unit_repeat1,
    STATE(263), 1,
      sym_global_directive,
    STATE(277), 1,
      sym_attribute,
    STATE(301), 1,
      aux_sym_struct_member_repeat1,
    STATE(418), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(288), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(265), 3,
      sym_enable_directive,
      sym_requires_directive,
      sym_diagnostic_directive,
    STATE(488), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_value_decl,
      sym_const_assert_statement,
  [8687] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(105), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(309), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(307), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8736] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(106), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(313), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(311), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(107), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(317), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(315), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8820] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(108), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(321), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(319), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8862] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(109), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(325), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(323), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8904] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(110), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(329), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(327), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8946] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(111), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(333), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(331), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [8988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(112), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(337), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(335), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9030] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(113), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(341), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(339), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9072] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(114), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(345), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(343), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9114] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(115), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(349), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(347), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9156] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(116), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(353), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(351), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9198] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(117), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(357), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(355), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9240] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(118), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(361), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(359), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9282] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(119), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(365), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(363), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(120), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(369), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(367), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(121), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(371), 22,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9408] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym__comment,
    STATE(147), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(192), 1,
      sym_argument_expression_list,
    STATE(220), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(261), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(257), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [9463] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym__comment,
    STATE(147), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(192), 1,
      sym_argument_expression_list,
    STATE(220), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(257), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [9516] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    STATE(124), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
    ACTIONS(384), 18,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_AT,
  [9560] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    STATE(125), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
    ACTIONS(384), 14,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
  [9608] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(126), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(257), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9648] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    STATE(127), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(386), 4,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
    ACTIONS(384), 16,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AT,
  [9694] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    STATE(128), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(384), 12,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [9746] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(129), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(402), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(400), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9786] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(130), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(406), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(404), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [9826] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    STATE(131), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_AT,
  [9882] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    STATE(132), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
  [9940] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    STATE(133), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 9,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_AT,
  [9998] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    STATE(134), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 8,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AT,
  [10058] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    STATE(135), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 10,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_AT,
  [10112] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(136), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_SLASH,
    ACTIONS(384), 20,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_AT,
  [10152] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(422), 1,
      anon_sym_else,
    STATE(137), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(420), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(418), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10193] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(424), 1,
      anon_sym_LT,
    STATE(138), 1,
      sym__comment,
    STATE(144), 1,
      sym_template_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(286), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(292), 6,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(283), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10238] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(139), 1,
      sym__comment,
    STATE(147), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(220), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(257), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10285] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(432), 1,
      anon_sym_else,
    STATE(140), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(430), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(428), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10326] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(141), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(269), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(267), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10364] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(142), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(436), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(434), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(143), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(277), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(275), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10440] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(144), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(281), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(279), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10478] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(438), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(145), 2,
      sym__comment,
      aux_sym_component_or_swizzle_specifier_repeat1,
    ACTIONS(300), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(295), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10520] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(146), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(251), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(249), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10558] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(375), 1,
      anon_sym_DOT,
    ACTIONS(382), 1,
      anon_sym_LBRACK,
    STATE(145), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(147), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(309), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(307), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [10602] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(148), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(446), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(444), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10640] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(149), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(450), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(448), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10678] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(150), 1,
      sym__comment,
    STATE(333), 1,
      aux_sym_case_selectors_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(454), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [10742] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(151), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(460), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(458), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(152), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(464), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(462), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10818] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(153), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(468), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(466), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10856] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(154), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(472), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(470), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(155), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(476), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(474), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10932] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(156), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(480), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(478), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [10970] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(157), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(484), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(482), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11008] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(158), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(488), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(486), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(159), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(492), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(490), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(160), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(496), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(494), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11122] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(137), 1,
      sym_compound_statement,
    STATE(161), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(162), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(239), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(237), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [11228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(163), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(500), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(498), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11266] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym__switch_body,
    STATE(164), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(364), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11334] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(165), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(506), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(504), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11372] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(166), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(510), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(508), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(167), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(514), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(512), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11448] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(140), 1,
      sym_compound_statement,
    STATE(168), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11516] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym__switch_body,
    STATE(169), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(364), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11584] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(154), 1,
      sym_compound_statement,
    STATE(170), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(171), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(235), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(233), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [11690] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(172), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(518), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(516), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11728] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(142), 1,
      sym_compound_statement,
    STATE(173), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [11796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(174), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(247), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(245), 16,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [11834] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(175), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(522), 7,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_AT,
    ACTIONS(520), 16,
      sym_identifier,
      anon_sym_let,
      anon_sym_const,
      anon_sym_var,
      anon_sym__,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_break,
      sym_continue_statement,
      anon_sym_continuing,
      anon_sym_return,
      anon_sym_const_assert,
      anon_sym_discard,
  [11872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(176), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(329), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(327), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [11909] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(177), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(341), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(339), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [11946] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    STATE(178), 1,
      sym__comment,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(481), 1,
      sym_for_header,
    STATE(495), 1,
      sym_for_init,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(497), 3,
      sym_variable_or_value_statement,
      sym_func_call_statement,
      sym_variable_updating_statement,
  [12011] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(179), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(526), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [12070] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(180), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(345), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(343), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(181), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(325), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(323), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(182), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(349), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(347), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(183), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(369), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(367), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12218] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(184), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(365), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(363), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12255] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(185), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(373), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(371), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12292] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(186), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(361), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(359), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(187), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(353), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(351), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(188), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(317), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(315), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12403] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_var,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      sym__comment,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(431), 1,
      sym_variable_decl,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(495), 1,
      sym_for_init,
    STATE(496), 1,
      sym_for_header,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(41), 2,
      anon_sym_let,
      anon_sym_const,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
    STATE(497), 3,
      sym_variable_or_value_statement,
      sym_func_call_statement,
      sym_variable_updating_statement,
  [12468] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(190), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(321), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(319), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12505] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(191), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(333), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(331), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12542] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(192), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(313), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(311), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12579] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(193), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(357), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(355), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12616] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(194), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(337), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(335), 15,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [12653] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym__comment,
    STATE(393), 1,
      aux_sym_argument_expression_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12715] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      sym__comment,
    STATE(272), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12777] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym__comment,
    STATE(274), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12839] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      sym__comment,
    STATE(274), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12901] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(199), 1,
      sym__comment,
    STATE(272), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [12963] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym__comment,
    STATE(278), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13025] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_GT,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(554), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(556), 1,
      anon_sym_AMP_AMP,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(201), 1,
      sym__comment,
    STATE(399), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
  [13089] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__comment,
    STATE(382), 1,
      aux_sym_argument_expression_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13151] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(554), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(556), 1,
      anon_sym_AMP_AMP,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_GT,
    STATE(203), 1,
      sym__comment,
    STATE(392), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
  [13215] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      sym__comment,
    STATE(274), 1,
      sym__attrib_end,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [13277] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(205), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [13332] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(206), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 4,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [13387] = 18,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(580), 1,
      ts_builtin_sym_end,
    ACTIONS(582), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_struct,
    ACTIONS(588), 1,
      anon_sym_alias,
    ACTIONS(591), 1,
      anon_sym_const,
    ACTIONS(594), 1,
      anon_sym_var,
    ACTIONS(597), 1,
      anon_sym_override,
    ACTIONS(600), 1,
      anon_sym_const_assert,
    ACTIONS(603), 1,
      anon_sym_fn,
    ACTIONS(606), 1,
      anon_sym_AT,
    STATE(277), 1,
      sym_attribute,
    STATE(301), 1,
      aux_sym_struct_member_repeat1,
    STATE(418), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(207), 2,
      sym__comment,
      aux_sym_translation_unit_repeat2,
    STATE(288), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(488), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_value_decl,
      sym_const_assert_statement,
  [13448] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(208), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [13499] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(209), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(384), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [13534] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_override,
    ACTIONS(27), 1,
      anon_sym_const_assert,
    ACTIONS(29), 1,
      anon_sym_fn,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    STATE(207), 1,
      aux_sym_translation_unit_repeat2,
    STATE(210), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(301), 1,
      aux_sym_struct_member_repeat1,
    STATE(418), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(288), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(488), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_value_decl,
      sym_const_assert_statement,
  [13597] = 19,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_alias,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_override,
    ACTIONS(27), 1,
      anon_sym_const_assert,
    ACTIONS(29), 1,
      anon_sym_fn,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    STATE(207), 1,
      aux_sym_translation_unit_repeat2,
    STATE(211), 1,
      sym__comment,
    STATE(277), 1,
      sym_attribute,
    STATE(301), 1,
      aux_sym_struct_member_repeat1,
    STATE(418), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(288), 2,
      sym_struct_decl,
      sym_function_decl,
    STATE(488), 4,
      sym_type_alias_decl,
      sym_global_variable_decl,
      sym_global_value_decl,
      sym_const_assert_statement,
  [13660] = 17,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(554), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(556), 1,
      anon_sym_AMP_AMP,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(212), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(611), 2,
      anon_sym_COMMA,
      anon_sym_GT,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
  [13719] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(213), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
    ACTIONS(384), 11,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
  [13758] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(214), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 5,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 8,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
  [13803] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(386), 1,
      anon_sym_PIPE,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(215), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 5,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
  [13856] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(216), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(613), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [13913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(217), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(261), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(257), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [13948] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(218), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(406), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(404), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [13983] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(552), 1,
      anon_sym_AMP,
    ACTIONS(556), 1,
      anon_sym_AMP_AMP,
    ACTIONS(558), 1,
      anon_sym_PIPE,
    ACTIONS(560), 1,
      anon_sym_CARET,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(219), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(562), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(384), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
  [14040] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(220), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(402), 7,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
      anon_sym_SLASH,
    ACTIONS(400), 13,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_PERCENT,
  [14075] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(286), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(617), 1,
      anon_sym_LT,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_template_list,
    STATE(221), 1,
      sym__comment,
    STATE(250), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(256), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(619), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [14122] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(222), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(623), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [14179] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(564), 1,
      anon_sym_LT_EQ,
    ACTIONS(566), 1,
      anon_sym_LT_LT,
    ACTIONS(568), 1,
      anon_sym_GT_GT,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(223), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(386), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(542), 3,
      anon_sym_LT,
      anon_sym_GT2,
      anon_sym_GT_EQ,
    ACTIONS(384), 7,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14228] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(570), 1,
      anon_sym_SLASH,
    STATE(224), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(548), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(550), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(386), 6,
      anon_sym_LT,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT2,
      anon_sym_GT_EQ,
      anon_sym_GT_GT,
    ACTIONS(384), 9,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
  [14269] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(225), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(625), 8,
      anon_sym_true,
      anon_sym_false,
      aux_sym__decimal_int_literal_token1,
      aux_sym__decimal_int_literal_token2,
      sym__hex_int_literal,
      aux_sym__decimal_float_literal_token4,
      aux_sym__hex_float_literal_token2,
      sym_identifier,
    ACTIONS(627), 12,
      aux_sym__decimal_float_literal_token1,
      aux_sym__decimal_float_literal_token2,
      aux_sym__decimal_float_literal_token3,
      aux_sym__decimal_float_literal_token5,
      aux_sym__hex_float_literal_token1,
      aux_sym__hex_float_literal_token3,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_AMP,
  [14304] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(629), 1,
      anon_sym_SEMI,
    STATE(226), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14360] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14416] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14472] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14528] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    STATE(230), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14584] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    STATE(231), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14640] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    STATE(232), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14696] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(643), 1,
      anon_sym_SEMI,
    STATE(233), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14752] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(645), 1,
      anon_sym_SEMI,
    STATE(234), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14808] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    STATE(235), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14864] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(649), 1,
      anon_sym_SEMI,
    STATE(236), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14920] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    STATE(237), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [14976] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(238), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15032] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    STATE(239), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15088] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(240), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15144] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(390), 1,
      anon_sym_SLASH,
    ACTIONS(408), 1,
      anon_sym_AMP,
    ACTIONS(412), 1,
      anon_sym_CARET,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_AMP_AMP,
    ACTIONS(456), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(388), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(392), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(394), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_GT2,
    ACTIONS(398), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(410), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [15200] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(661), 1,
      anon_sym_enable,
    ACTIONS(664), 1,
      anon_sym_require,
    ACTIONS(667), 1,
      anon_sym_diagnostic,
    ACTIONS(670), 1,
      anon_sym_const,
    STATE(263), 1,
      sym_global_directive,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(242), 2,
      sym__comment,
      aux_sym_translation_unit_repeat1,
    STATE(265), 3,
      sym_enable_directive,
      sym_requires_directive,
      sym_diagnostic_directive,
    ACTIONS(659), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15243] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(243), 1,
      sym__comment,
    STATE(250), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(254), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(672), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15281] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(244), 1,
      sym__comment,
    STATE(250), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(255), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(674), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15319] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(245), 1,
      sym__comment,
    STATE(250), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(257), 1,
      sym_component_or_swizzle_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(676), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15357] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      sym__comment,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(483), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(501), 2,
      sym_func_call_statement,
      sym_variable_updating_statement,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
  [15408] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(682), 1,
      anon_sym_diagnostic,
    ACTIONS(688), 1,
      anon_sym_id,
    ACTIONS(690), 1,
      anon_sym_interpolate,
    ACTIONS(692), 1,
      anon_sym_workgroup_size,
    STATE(247), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(684), 6,
      anon_sym_const,
      anon_sym_invariant,
      anon_sym_must_use,
      anon_sym_vertex,
      anon_sym_fragment,
      anon_sym_compute,
    ACTIONS(686), 6,
      anon_sym_align,
      anon_sym_binding,
      anon_sym_builtin,
      anon_sym_group,
      anon_sym_location,
      anon_sym_size,
  [15447] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(694), 1,
      anon_sym_DOT,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(248), 2,
      sym__comment,
      aux_sym_component_or_swizzle_specifier_repeat1,
    ACTIONS(295), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15480] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      sym__comment,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(503), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(501), 2,
      sym_func_call_statement,
      sym_variable_updating_statement,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
  [15531] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(615), 1,
      anon_sym_DOT,
    ACTIONS(621), 1,
      anon_sym_LBRACK,
    STATE(248), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(250), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(307), 13,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15566] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym__,
    ACTIONS(678), 1,
      sym_identifier,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym__comment,
    STATE(258), 1,
      sym_lhs_expression,
    STATE(338), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(423), 1,
      sym_call_phrase,
    STATE(433), 1,
      sym_template_elaborated_ident,
    STATE(473), 1,
      sym_for_update,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(501), 2,
      sym_func_call_statement,
      sym_variable_updating_statement,
    STATE(421), 3,
      sym_assignment_statement,
      sym_increment_statement,
      sym_decrement_statement,
  [15617] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(252), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(327), 15,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15645] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(253), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(315), 15,
      anon_sym_DOT,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15673] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(254), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(676), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15700] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(255), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(672), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15727] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(256), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(674), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15754] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(257), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(704), 14,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [15781] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(706), 1,
      anon_sym_EQ,
    ACTIONS(710), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(712), 1,
      anon_sym_DASH_DASH,
    STATE(68), 1,
      sym_compound_assignment_operator,
    STATE(258), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(708), 10,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
  [15816] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(716), 1,
      anon_sym_const,
    STATE(259), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(714), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15844] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(720), 1,
      anon_sym_LBRACE,
    ACTIONS(722), 1,
      anon_sym_AT,
    STATE(277), 1,
      sym_attribute,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(260), 2,
      sym__comment,
      aux_sym_struct_member_repeat1,
    ACTIONS(718), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [15876] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(727), 1,
      anon_sym_const,
    STATE(261), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(725), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15904] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(731), 1,
      anon_sym_const,
    STATE(262), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(729), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15932] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(735), 1,
      anon_sym_const,
    STATE(263), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(733), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15960] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(739), 1,
      anon_sym_const,
    STATE(264), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(737), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [15988] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(743), 1,
      anon_sym_const,
    STATE(265), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(741), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(747), 1,
      anon_sym_const,
    STATE(266), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(745), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16044] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(751), 1,
      anon_sym_const,
    STATE(267), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(749), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16072] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(755), 1,
      anon_sym_const,
    STATE(268), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(753), 12,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_enable,
      anon_sym_require,
      anon_sym_diagnostic,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(269), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(759), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(757), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16127] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(270), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(763), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(761), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16154] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(271), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(767), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(765), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(272), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(771), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(769), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(273), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(775), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(773), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(274), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(779), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(777), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16259] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(275), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(783), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(781), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16285] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(276), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(787), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(785), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(277), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(791), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(789), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16337] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(278), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(795), 2,
      anon_sym_LBRACE,
      anon_sym_AT,
    ACTIONS(793), 9,
      sym_identifier,
      anon_sym_var,
      anon_sym_override,
      anon_sym_if,
      anon_sym_switch,
      anon_sym_loop,
      anon_sym_for,
      anon_sym_while,
      anon_sym_fn,
  [16363] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(799), 1,
      anon_sym_const,
    STATE(279), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(797), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16388] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(803), 1,
      anon_sym_const,
    STATE(280), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(801), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16413] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(807), 1,
      anon_sym_const,
    STATE(281), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(805), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16438] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(811), 1,
      anon_sym_const,
    STATE(282), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(809), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16463] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(815), 1,
      anon_sym_const,
    STATE(283), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(813), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16488] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(819), 1,
      anon_sym_const,
    STATE(284), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(817), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16513] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(823), 1,
      anon_sym_const,
    STATE(285), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(821), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16538] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(827), 1,
      anon_sym_const,
    STATE(286), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(825), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16563] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(831), 1,
      anon_sym_const,
    STATE(287), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(829), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16588] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(835), 1,
      anon_sym_const,
    STATE(288), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(833), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16613] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(839), 1,
      anon_sym_const,
    STATE(289), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(837), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16638] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(843), 1,
      anon_sym_const,
    STATE(290), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(841), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16663] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(847), 1,
      anon_sym_const,
    STATE(291), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(845), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16688] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(851), 1,
      anon_sym_const,
    STATE(292), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(849), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16713] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(853), 1,
      anon_sym_const,
    STATE(293), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(580), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16738] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(857), 1,
      anon_sym_const,
    STATE(294), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(855), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16763] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(861), 1,
      anon_sym_const,
    STATE(295), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(859), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_struct,
      anon_sym_alias,
      anon_sym_var,
      anon_sym_override,
      anon_sym_const_assert,
      anon_sym_fn,
      anon_sym_AT,
  [16788] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      anon_sym_if,
    ACTIONS(867), 1,
      anon_sym_switch,
    ACTIONS(869), 1,
      anon_sym_loop,
    ACTIONS(871), 1,
      anon_sym_for,
    ACTIONS(873), 1,
      anon_sym_while,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(296), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [16826] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(875), 1,
      anon_sym_LT,
    STATE(100), 1,
      sym_template_list,
    STATE(297), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(286), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_AT,
  [16852] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(877), 1,
      anon_sym_if,
    STATE(165), 1,
      sym_else_statement,
    STATE(277), 1,
      sym_attribute,
    STATE(298), 1,
      sym__comment,
    STATE(346), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(148), 2,
      sym_compound_statement,
      sym_if_statement,
  [16885] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(877), 1,
      anon_sym_if,
    STATE(149), 1,
      sym_else_statement,
    STATE(277), 1,
      sym_attribute,
    STATE(299), 1,
      sym__comment,
    STATE(346), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(148), 2,
      sym_compound_statement,
      sym_if_statement,
  [16918] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_attribute,
    STATE(300), 1,
      sym__comment,
    STATE(363), 1,
      aux_sym_struct_member_repeat1,
    STATE(384), 1,
      sym_param,
    STATE(493), 1,
      sym_param_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [16950] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(883), 1,
      anon_sym_override,
    ACTIONS(885), 1,
      anon_sym_fn,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(301), 1,
      sym__comment,
    STATE(428), 1,
      sym_variable_decl,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [16982] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    ACTIONS(889), 1,
      anon_sym_case,
    ACTIONS(891), 1,
      anon_sym_default,
    STATE(302), 1,
      sym__comment,
    STATE(303), 1,
      aux_sym__switch_body_repeat1,
    STATE(400), 1,
      sym_switch_clause,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(397), 2,
      sym_case_clause,
      sym_default_alone_clause,
  [17012] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
    ACTIONS(895), 1,
      anon_sym_case,
    ACTIONS(898), 1,
      anon_sym_default,
    STATE(400), 1,
      sym_switch_clause,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(303), 2,
      sym__comment,
      aux_sym__switch_body_repeat1,
    STATE(397), 2,
      sym_case_clause,
      sym_default_alone_clause,
  [17040] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(901), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_attribute,
    STATE(304), 1,
      sym__comment,
    STATE(363), 1,
      aux_sym_struct_member_repeat1,
    STATE(384), 1,
      sym_param,
    STATE(460), 1,
      sym_param_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17072] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(889), 1,
      anon_sym_case,
    ACTIONS(891), 1,
      anon_sym_default,
    ACTIONS(903), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym__switch_body_repeat1,
    STATE(305), 1,
      sym__comment,
    STATE(400), 1,
      sym_switch_clause,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(397), 2,
      sym_case_clause,
      sym_default_alone_clause,
  [17102] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(905), 1,
      anon_sym_DASH_GT,
    STATE(277), 1,
      sym_attribute,
    STATE(279), 1,
      sym_compound_statement,
    STATE(306), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17131] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(307), 1,
      sym__comment,
    STATE(352), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(505), 1,
      sym_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [17158] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(308), 1,
      sym__comment,
    STATE(352), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(504), 1,
      sym_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [17185] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(911), 1,
      anon_sym_DASH_GT,
    STATE(277), 1,
      sym_attribute,
    STATE(283), 1,
      sym_compound_statement,
    STATE(309), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17214] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(310), 1,
      sym__comment,
    STATE(367), 1,
      aux_sym_struct_member_repeat1,
    STATE(413), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17243] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(917), 1,
      anon_sym_DASH_GT,
    STATE(277), 1,
      sym_attribute,
    STATE(281), 1,
      sym_compound_statement,
    STATE(311), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17272] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(919), 1,
      anon_sym_DASH_GT,
    STATE(277), 1,
      sym_attribute,
    STATE(287), 1,
      sym_compound_statement,
    STATE(312), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17301] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_attribute,
    STATE(313), 1,
      sym__comment,
    STATE(363), 1,
      aux_sym_struct_member_repeat1,
    STATE(419), 1,
      sym_param,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17330] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(879), 1,
      sym_identifier,
    ACTIONS(923), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_attribute,
    STATE(314), 1,
      sym__comment,
    STATE(363), 1,
      aux_sym_struct_member_repeat1,
    STATE(419), 1,
      sym_param,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17359] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(925), 1,
      anon_sym_COLON,
    STATE(277), 1,
      sym_attribute,
    STATE(315), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    STATE(401), 1,
      sym_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17388] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(889), 1,
      anon_sym_case,
    ACTIONS(891), 1,
      anon_sym_default,
    STATE(302), 1,
      aux_sym__switch_body_repeat1,
    STATE(316), 1,
      sym__comment,
    STATE(400), 1,
      sym_switch_clause,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(397), 2,
      sym_case_clause,
      sym_default_alone_clause,
  [17415] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(913), 1,
      sym_identifier,
    ACTIONS(927), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(317), 1,
      sym__comment,
    STATE(367), 1,
      aux_sym_struct_member_repeat1,
    STATE(413), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17444] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(929), 1,
      anon_sym_COLON,
    STATE(277), 1,
      sym_attribute,
    STATE(318), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    STATE(383), 1,
      sym_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17473] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(889), 1,
      anon_sym_case,
    ACTIONS(891), 1,
      anon_sym_default,
    STATE(305), 1,
      aux_sym__switch_body_repeat1,
    STATE(319), 1,
      sym__comment,
    STATE(400), 1,
      sym_switch_clause,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(397), 2,
      sym_case_clause,
      sym_default_alone_clause,
  [17500] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(320), 1,
      sym__comment,
    STATE(352), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(472), 1,
      sym_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [17527] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(907), 1,
      sym_identifier,
    ACTIONS(909), 1,
      anon_sym_LPAREN,
    STATE(321), 1,
      sym__comment,
    STATE(352), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(459), 1,
      sym_lhs_expression,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [17554] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(282), 1,
      sym_compound_statement,
    STATE(322), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17580] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(254), 1,
      sym_component_or_swizzle_specifier,
    STATE(323), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17606] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(286), 1,
      sym_compound_statement,
    STATE(324), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17632] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(325), 1,
      sym__comment,
    STATE(332), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17658] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(326), 1,
      sym__comment,
    STATE(363), 1,
      aux_sym_struct_member_repeat1,
    STATE(419), 1,
      sym_param,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17684] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(327), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(933), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_RPAREN,
  [17702] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(935), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(328), 2,
      sym__comment,
      aux_sym_case_selectors_repeat1,
    ACTIONS(526), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [17722] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(284), 1,
      sym_compound_statement,
    STATE(329), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17748] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(322), 1,
      sym_template_elaborated_ident,
    STATE(330), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17774] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(331), 1,
      sym__comment,
    STATE(334), 1,
      sym_template_elaborated_ident,
    STATE(335), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17800] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(290), 1,
      sym_compound_statement,
    STATE(332), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17826] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    STATE(328), 1,
      aux_sym_case_selectors_repeat1,
    STATE(333), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(173), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [17848] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(289), 1,
      sym_compound_statement,
    STATE(334), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17874] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(335), 1,
      sym__comment,
    STATE(342), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17900] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(336), 1,
      sym__comment,
    STATE(367), 1,
      aux_sym_struct_member_repeat1,
    STATE(413), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17926] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(337), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    STATE(398), 1,
      sym_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [17952] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(940), 1,
      sym_identifier,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
    STATE(338), 1,
      sym__comment,
    STATE(345), 1,
      aux_sym_lhs_expression_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [17976] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(339), 1,
      sym__comment,
    STATE(456), 1,
      sym_severity_control_name,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(944), 4,
      anon_sym_error,
      anon_sym_warning,
      anon_sym_info,
      anon_sym_off,
  [17996] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(255), 1,
      sym_component_or_swizzle_specifier,
    STATE(340), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18022] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(913), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(341), 1,
      sym__comment,
    STATE(367), 1,
      aux_sym_struct_member_repeat1,
    STATE(387), 1,
      sym_struct_member,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18048] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(295), 1,
      sym_compound_statement,
    STATE(342), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18074] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(343), 1,
      sym__comment,
    STATE(356), 1,
      aux_sym_struct_member_repeat1,
    STATE(357), 1,
      sym_template_elaborated_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18100] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(280), 1,
      sym_compound_statement,
    STATE(344), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(946), 2,
      sym_identifier,
      anon_sym_LPAREN,
    ACTIONS(948), 2,
      anon_sym_STAR,
      anon_sym_AMP,
    STATE(345), 2,
      sym__comment,
      aux_sym_lhs_expression_repeat1,
  [18146] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    ACTIONS(865), 1,
      anon_sym_if,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(346), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18172] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    STATE(333), 1,
      aux_sym_case_selectors_repeat1,
    STATE(347), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(454), 3,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [18194] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(329), 1,
      sym_template_elaborated_ident,
    STATE(330), 1,
      aux_sym_struct_member_repeat1,
    STATE(348), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18220] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_compound_statement,
    STATE(277), 1,
      sym_attribute,
    STATE(349), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18246] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(257), 1,
      sym_component_or_swizzle_specifier,
    STATE(350), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18272] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(351), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    STATE(402), 1,
      sym_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18298] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(953), 1,
      anon_sym_LPAREN,
    STATE(345), 1,
      aux_sym_lhs_expression_repeat1,
    STATE(352), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(47), 2,
      anon_sym_STAR,
      anon_sym_AMP,
  [18322] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym_compound_statement,
    STATE(277), 1,
      sym_attribute,
    STATE(353), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18348] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(955), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(354), 1,
      sym__comment,
    STATE(369), 1,
      aux_sym_struct_member_repeat1,
    STATE(487), 1,
      sym_continuing_compound_statement,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18374] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(277), 1,
      sym_attribute,
    STATE(324), 1,
      sym_template_elaborated_ident,
    STATE(325), 1,
      aux_sym_struct_member_repeat1,
    STATE(355), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18400] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(344), 1,
      sym_template_elaborated_ident,
    STATE(356), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18426] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(291), 1,
      sym_compound_statement,
    STATE(357), 1,
      sym__comment,
    STATE(359), 1,
      aux_sym_struct_member_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18452] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(259), 1,
      anon_sym_DOT,
    ACTIONS(265), 1,
      anon_sym_LBRACK,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_component_or_swizzle_specifier_repeat1,
    STATE(256), 1,
      sym_component_or_swizzle_specifier,
    STATE(358), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18478] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(359), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18501] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(957), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(360), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18524] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(360), 1,
      aux_sym_struct_member_repeat1,
    STATE(361), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18547] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(959), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(362), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18570] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(363), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18593] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(963), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(364), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18616] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(365), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(526), 4,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_AT,
  [18633] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(875), 1,
      anon_sym_LT,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(366), 1,
      sym__comment,
    STATE(408), 1,
      sym_optionally_typed_ident,
    STATE(424), 1,
      sym_template_list,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18656] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(967), 1,
      sym_identifier,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(367), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18679] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(368), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(969), 4,
      sym_identifier,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_AMP,
  [18696] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(971), 1,
      anon_sym_LBRACE,
    STATE(260), 1,
      aux_sym_struct_member_repeat1,
    STATE(277), 1,
      sym_attribute,
    STATE(369), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18719] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_attribute,
    STATE(362), 1,
      aux_sym_struct_member_repeat1,
    STATE(370), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18742] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(273), 1,
      sym__attrib_end,
    STATE(371), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18762] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(372), 1,
      sym__comment,
    STATE(434), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18782] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(975), 1,
      anon_sym_COMMA,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(373), 2,
      sym__comment,
      aux_sym_param_list_repeat1,
  [18800] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(980), 1,
      anon_sym_SEMI,
    ACTIONS(982), 1,
      anon_sym_COMMA,
    STATE(374), 1,
      sym__comment,
    STATE(378), 1,
      aux_sym_enable_directive_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18820] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(984), 1,
      anon_sym_COMMA,
    ACTIONS(986), 1,
      anon_sym_GT,
    STATE(375), 1,
      sym__comment,
    STATE(388), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18840] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(990), 1,
      anon_sym_COLON,
    STATE(376), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(988), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [18858] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      sym__comment,
    STATE(386), 1,
      aux_sym_enable_directive_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18878] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(998), 1,
      anon_sym_COMMA,
    STATE(378), 1,
      sym__comment,
    STATE(386), 1,
      aux_sym_enable_directive_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18898] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(379), 1,
      sym__comment,
    STATE(445), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18918] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(380), 1,
      sym__comment,
    STATE(436), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18938] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1000), 1,
      anon_sym_COMMA,
    ACTIONS(1002), 1,
      anon_sym_GT,
    STATE(381), 1,
      sym__comment,
    STATE(389), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18958] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(1004), 1,
      anon_sym_COMMA,
    STATE(382), 1,
      sym__comment,
    STATE(391), 1,
      aux_sym_argument_expression_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [18978] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(383), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1006), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [18994] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    ACTIONS(1010), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      sym__comment,
    STATE(404), 1,
      aux_sym_param_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19014] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1012), 1,
      anon_sym_SEMI,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    STATE(377), 1,
      aux_sym_enable_directive_repeat1,
    STATE(385), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1016), 1,
      anon_sym_SEMI,
    ACTIONS(1018), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(386), 2,
      sym__comment,
      aux_sym_enable_directive_repeat1,
  [19052] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1021), 1,
      anon_sym_COMMA,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      sym__comment,
    STATE(407), 1,
      aux_sym_struct_decl_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19072] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(199), 1,
      anon_sym_GT,
    ACTIONS(1025), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      sym__comment,
    STATE(394), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19092] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(209), 1,
      anon_sym_GT,
    ACTIONS(1027), 1,
      anon_sym_COMMA,
    STATE(389), 1,
      sym__comment,
    STATE(394), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19112] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(390), 1,
      sym__comment,
    STATE(437), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(391), 2,
      sym__comment,
      aux_sym_argument_expression_list_repeat1,
  [19150] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(207), 1,
      anon_sym_GT,
    ACTIONS(1032), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      sym__comment,
    STATE(394), 1,
      aux_sym_template_list_repeat1,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    STATE(391), 1,
      aux_sym_argument_expression_list_repeat1,
    STATE(393), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1036), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      anon_sym_GT,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(394), 2,
      sym__comment,
      aux_sym_template_list_repeat1,
  [19208] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(395), 1,
      sym__comment,
    STATE(429), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19228] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1041), 1,
      anon_sym_COMMA,
    ACTIONS(1044), 1,
      anon_sym_RBRACE,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    STATE(396), 2,
      sym__comment,
      aux_sym_struct_decl_repeat1,
  [19246] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(397), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1046), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [19262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(398), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1048), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [19278] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(203), 1,
      anon_sym_GT,
    ACTIONS(1050), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_template_list_repeat1,
    STATE(399), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19298] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(400), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1052), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [19314] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(401), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1054), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [19330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(402), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1056), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [19346] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(931), 1,
      sym_identifier,
    STATE(327), 1,
      sym_template_elaborated_ident,
    STATE(403), 1,
      sym__comment,
    STATE(414), 1,
      sym_type_specifier,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19366] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    ACTIONS(1058), 1,
      anon_sym_COMMA,
    STATE(373), 1,
      aux_sym_param_list_repeat1,
    STATE(404), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19386] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(271), 1,
      sym__attrib_end,
    STATE(405), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19406] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1060), 1,
      anon_sym_DOT,
    STATE(406), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1062), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19424] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(915), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 1,
      anon_sym_COMMA,
    STATE(396), 1,
      aux_sym_struct_decl_repeat1,
    STATE(407), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19444] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(408), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1066), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [19459] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(1070), 1,
      anon_sym_SEMI,
    STATE(409), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19476] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(410), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1072), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [19491] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
    STATE(411), 1,
      sym__comment,
    STATE(478), 1,
      sym_diagnostic_control,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19508] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(412), 1,
      sym__comment,
    STATE(474), 1,
      sym_optionally_typed_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19525] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(413), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1044), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19540] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(414), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1076), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19555] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(415), 1,
      sym__comment,
    STATE(507), 1,
      sym_optionally_typed_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19572] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(416), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1078), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19587] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(417), 1,
      sym__comment,
    STATE(425), 1,
      sym_optionally_typed_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19604] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1080), 1,
      anon_sym_SEMI,
    ACTIONS(1082), 1,
      anon_sym_EQ,
    STATE(418), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19621] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(419), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(978), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19636] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(420), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1084), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [19651] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(421), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1086), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [19666] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(422), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1088), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [19681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(423), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1090), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [19696] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(424), 1,
      sym__comment,
    STATE(440), 1,
      sym_optionally_typed_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19713] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1092), 1,
      anon_sym_SEMI,
    ACTIONS(1094), 1,
      anon_sym_EQ,
    STATE(425), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19730] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1074), 1,
      anon_sym_LPAREN,
    STATE(276), 1,
      sym_diagnostic_control,
    STATE(426), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19747] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(965), 1,
      sym_identifier,
    STATE(427), 1,
      sym__comment,
    STATE(441), 1,
      sym_optionally_typed_ident,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19764] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1096), 1,
      anon_sym_SEMI,
    ACTIONS(1098), 1,
      anon_sym_EQ,
    STATE(428), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19781] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(429), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1100), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [19796] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(992), 1,
      anon_sym_SEMI,
    ACTIONS(1068), 1,
      sym_identifier,
    STATE(430), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19813] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1102), 1,
      anon_sym_SEMI,
    ACTIONS(1104), 1,
      anon_sym_EQ,
    STATE(431), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19830] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(996), 1,
      anon_sym_SEMI,
    ACTIONS(1068), 1,
      sym_identifier,
    STATE(432), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19847] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(263), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_argument_expression_list,
    STATE(433), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19864] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(434), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19879] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
    ACTIONS(1110), 1,
      anon_sym_if,
    STATE(435), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19896] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(436), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1112), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [19911] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(437), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1114), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [19926] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      sym_identifier,
    ACTIONS(1116), 1,
      anon_sym_SEMI,
    STATE(438), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19943] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(439), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1016), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [19958] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(440), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
    ACTIONS(1118), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [19973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1120), 1,
      anon_sym_SEMI,
    ACTIONS(1122), 1,
      anon_sym_EQ,
    STATE(441), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [19990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1124), 1,
      sym_identifier,
    STATE(405), 1,
      sym_diagnostic_rule_name,
    STATE(442), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20007] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1126), 1,
      anon_sym_COLON,
    STATE(443), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20021] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1128), 1,
      anon_sym_EQ,
    STATE(444), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20035] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1130), 1,
      anon_sym_SEMI,
    STATE(445), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20049] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1132), 1,
      anon_sym_LPAREN,
    STATE(446), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20063] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(447), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20077] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1134), 1,
      anon_sym_COLON,
    STATE(448), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20091] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
    STATE(449), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20105] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1138), 1,
      anon_sym_RBRACE,
    STATE(450), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20119] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1140), 1,
      sym_identifier,
    STATE(451), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20133] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(706), 1,
      anon_sym_EQ,
    STATE(452), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20147] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1142), 1,
      anon_sym_LPAREN,
    STATE(453), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1108), 1,
      anon_sym_SEMI,
    STATE(454), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1144), 1,
      anon_sym_SEMI,
    STATE(455), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20189] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1146), 1,
      anon_sym_COMMA,
    STATE(456), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20203] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1148), 1,
      anon_sym_COMMA,
    STATE(457), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20217] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(458), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20231] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1150), 1,
      anon_sym_RPAREN,
    STATE(459), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20245] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1152), 1,
      anon_sym_RPAREN,
    STATE(460), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20259] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(461), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20273] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1068), 1,
      sym_identifier,
    STATE(462), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20287] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1154), 1,
      sym_identifier,
    STATE(463), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20301] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1156), 1,
      anon_sym_RBRACE,
    STATE(464), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
    STATE(465), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20329] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
    STATE(466), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20343] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1162), 1,
      anon_sym_LPAREN,
    STATE(467), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20357] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1164), 1,
      anon_sym_LPAREN,
    STATE(468), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20371] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1166), 1,
      anon_sym_RBRACE,
    STATE(469), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20385] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1168), 1,
      anon_sym_LPAREN,
    STATE(470), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20399] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1170), 1,
      anon_sym_COLON,
    STATE(471), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20413] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1172), 1,
      anon_sym_RPAREN,
    STATE(472), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(473), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20441] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1094), 1,
      anon_sym_EQ,
    STATE(474), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1176), 1,
      anon_sym_RBRACE,
    STATE(475), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20469] = 5,
    ACTIONS(5), 1,
      sym__block_comment,
    ACTIONS(1178), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1180), 1,
      aux_sym__comment_token1,
    ACTIONS(1182), 1,
      sym__blankspace,
    STATE(476), 1,
      sym__comment,
  [20485] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1184), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20499] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1186), 1,
      anon_sym_SEMI,
    STATE(478), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20513] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1188), 1,
      anon_sym_RBRACE,
    STATE(479), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20527] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1190), 1,
      anon_sym_RBRACE,
    STATE(480), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20541] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1192), 1,
      anon_sym_RPAREN,
    STATE(481), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20555] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1194), 1,
      sym_identifier,
    STATE(482), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20569] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(702), 1,
      anon_sym_RPAREN,
    STATE(483), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20583] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(484), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20597] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(485), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20611] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(486), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1196), 1,
      anon_sym_RBRACE,
    STATE(487), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20639] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1198), 1,
      anon_sym_SEMI,
    STATE(488), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20653] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1200), 1,
      ts_builtin_sym_end,
    STATE(489), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20667] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1202), 1,
      sym_identifier,
    STATE(490), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20681] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1204), 1,
      anon_sym_RBRACE,
    STATE(491), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20695] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1206), 1,
      anon_sym_COLON,
    STATE(492), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20709] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1208), 1,
      anon_sym_RPAREN,
    STATE(493), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20723] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1210), 1,
      sym_identifier,
    STATE(494), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20737] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1212), 1,
      anon_sym_SEMI,
    STATE(495), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20751] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1214), 1,
      anon_sym_RPAREN,
    STATE(496), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20765] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1216), 1,
      anon_sym_SEMI,
    STATE(497), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20779] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1218), 1,
      sym_identifier,
    STATE(498), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20793] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1220), 1,
      sym_identifier,
    STATE(499), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20807] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1222), 1,
      sym_identifier,
    STATE(500), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20821] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1224), 1,
      anon_sym_RPAREN,
    STATE(501), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20835] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1226), 1,
      sym_identifier,
    STATE(502), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20849] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(503), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1228), 1,
      anon_sym_RPAREN,
    STATE(504), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20877] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1230), 1,
      anon_sym_RPAREN,
    STATE(505), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20891] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1232), 1,
      sym_identifier,
    STATE(506), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20905] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(1234), 1,
      anon_sym_EQ,
    STATE(507), 1,
      sym__comment,
    ACTIONS(5), 2,
      sym__block_comment,
      sym__blankspace,
  [20919] = 1,
    ACTIONS(1236), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 125,
  [SMALL_STATE(4)] = 250,
  [SMALL_STATE(5)] = 375,
  [SMALL_STATE(6)] = 500,
  [SMALL_STATE(7)] = 625,
  [SMALL_STATE(8)] = 750,
  [SMALL_STATE(9)] = 872,
  [SMALL_STATE(10)] = 994,
  [SMALL_STATE(11)] = 1116,
  [SMALL_STATE(12)] = 1238,
  [SMALL_STATE(13)] = 1358,
  [SMALL_STATE(14)] = 1477,
  [SMALL_STATE(15)] = 1596,
  [SMALL_STATE(16)] = 1715,
  [SMALL_STATE(17)] = 1834,
  [SMALL_STATE(18)] = 1924,
  [SMALL_STATE(19)] = 2014,
  [SMALL_STATE(20)] = 2102,
  [SMALL_STATE(21)] = 2190,
  [SMALL_STATE(22)] = 2278,
  [SMALL_STATE(23)] = 2366,
  [SMALL_STATE(24)] = 2454,
  [SMALL_STATE(25)] = 2542,
  [SMALL_STATE(26)] = 2630,
  [SMALL_STATE(27)] = 2718,
  [SMALL_STATE(28)] = 2806,
  [SMALL_STATE(29)] = 2891,
  [SMALL_STATE(30)] = 2976,
  [SMALL_STATE(31)] = 3061,
  [SMALL_STATE(32)] = 3146,
  [SMALL_STATE(33)] = 3231,
  [SMALL_STATE(34)] = 3316,
  [SMALL_STATE(35)] = 3401,
  [SMALL_STATE(36)] = 3486,
  [SMALL_STATE(37)] = 3571,
  [SMALL_STATE(38)] = 3656,
  [SMALL_STATE(39)] = 3741,
  [SMALL_STATE(40)] = 3826,
  [SMALL_STATE(41)] = 3911,
  [SMALL_STATE(42)] = 3996,
  [SMALL_STATE(43)] = 4081,
  [SMALL_STATE(44)] = 4166,
  [SMALL_STATE(45)] = 4248,
  [SMALL_STATE(46)] = 4330,
  [SMALL_STATE(47)] = 4412,
  [SMALL_STATE(48)] = 4494,
  [SMALL_STATE(49)] = 4576,
  [SMALL_STATE(50)] = 4658,
  [SMALL_STATE(51)] = 4740,
  [SMALL_STATE(52)] = 4822,
  [SMALL_STATE(53)] = 4904,
  [SMALL_STATE(54)] = 4986,
  [SMALL_STATE(55)] = 5068,
  [SMALL_STATE(56)] = 5150,
  [SMALL_STATE(57)] = 5232,
  [SMALL_STATE(58)] = 5314,
  [SMALL_STATE(59)] = 5396,
  [SMALL_STATE(60)] = 5478,
  [SMALL_STATE(61)] = 5560,
  [SMALL_STATE(62)] = 5642,
  [SMALL_STATE(63)] = 5724,
  [SMALL_STATE(64)] = 5806,
  [SMALL_STATE(65)] = 5888,
  [SMALL_STATE(66)] = 5970,
  [SMALL_STATE(67)] = 6052,
  [SMALL_STATE(68)] = 6134,
  [SMALL_STATE(69)] = 6216,
  [SMALL_STATE(70)] = 6298,
  [SMALL_STATE(71)] = 6380,
  [SMALL_STATE(72)] = 6462,
  [SMALL_STATE(73)] = 6544,
  [SMALL_STATE(74)] = 6626,
  [SMALL_STATE(75)] = 6708,
  [SMALL_STATE(76)] = 6790,
  [SMALL_STATE(77)] = 6872,
  [SMALL_STATE(78)] = 6954,
  [SMALL_STATE(79)] = 7036,
  [SMALL_STATE(80)] = 7118,
  [SMALL_STATE(81)] = 7200,
  [SMALL_STATE(82)] = 7282,
  [SMALL_STATE(83)] = 7364,
  [SMALL_STATE(84)] = 7446,
  [SMALL_STATE(85)] = 7528,
  [SMALL_STATE(86)] = 7610,
  [SMALL_STATE(87)] = 7692,
  [SMALL_STATE(88)] = 7774,
  [SMALL_STATE(89)] = 7856,
  [SMALL_STATE(90)] = 7938,
  [SMALL_STATE(91)] = 7984,
  [SMALL_STATE(92)] = 8030,
  [SMALL_STATE(93)] = 8076,
  [SMALL_STATE(94)] = 8122,
  [SMALL_STATE(95)] = 8168,
  [SMALL_STATE(96)] = 8214,
  [SMALL_STATE(97)] = 8272,
  [SMALL_STATE(98)] = 8318,
  [SMALL_STATE(99)] = 8364,
  [SMALL_STATE(100)] = 8410,
  [SMALL_STATE(101)] = 8455,
  [SMALL_STATE(102)] = 8507,
  [SMALL_STATE(103)] = 8557,
  [SMALL_STATE(104)] = 8604,
  [SMALL_STATE(105)] = 8687,
  [SMALL_STATE(106)] = 8736,
  [SMALL_STATE(107)] = 8778,
  [SMALL_STATE(108)] = 8820,
  [SMALL_STATE(109)] = 8862,
  [SMALL_STATE(110)] = 8904,
  [SMALL_STATE(111)] = 8946,
  [SMALL_STATE(112)] = 8988,
  [SMALL_STATE(113)] = 9030,
  [SMALL_STATE(114)] = 9072,
  [SMALL_STATE(115)] = 9114,
  [SMALL_STATE(116)] = 9156,
  [SMALL_STATE(117)] = 9198,
  [SMALL_STATE(118)] = 9240,
  [SMALL_STATE(119)] = 9282,
  [SMALL_STATE(120)] = 9324,
  [SMALL_STATE(121)] = 9366,
  [SMALL_STATE(122)] = 9408,
  [SMALL_STATE(123)] = 9463,
  [SMALL_STATE(124)] = 9516,
  [SMALL_STATE(125)] = 9560,
  [SMALL_STATE(126)] = 9608,
  [SMALL_STATE(127)] = 9648,
  [SMALL_STATE(128)] = 9694,
  [SMALL_STATE(129)] = 9746,
  [SMALL_STATE(130)] = 9786,
  [SMALL_STATE(131)] = 9826,
  [SMALL_STATE(132)] = 9882,
  [SMALL_STATE(133)] = 9940,
  [SMALL_STATE(134)] = 9998,
  [SMALL_STATE(135)] = 10058,
  [SMALL_STATE(136)] = 10112,
  [SMALL_STATE(137)] = 10152,
  [SMALL_STATE(138)] = 10193,
  [SMALL_STATE(139)] = 10238,
  [SMALL_STATE(140)] = 10285,
  [SMALL_STATE(141)] = 10326,
  [SMALL_STATE(142)] = 10364,
  [SMALL_STATE(143)] = 10402,
  [SMALL_STATE(144)] = 10440,
  [SMALL_STATE(145)] = 10478,
  [SMALL_STATE(146)] = 10520,
  [SMALL_STATE(147)] = 10558,
  [SMALL_STATE(148)] = 10602,
  [SMALL_STATE(149)] = 10640,
  [SMALL_STATE(150)] = 10678,
  [SMALL_STATE(151)] = 10742,
  [SMALL_STATE(152)] = 10780,
  [SMALL_STATE(153)] = 10818,
  [SMALL_STATE(154)] = 10856,
  [SMALL_STATE(155)] = 10894,
  [SMALL_STATE(156)] = 10932,
  [SMALL_STATE(157)] = 10970,
  [SMALL_STATE(158)] = 11008,
  [SMALL_STATE(159)] = 11046,
  [SMALL_STATE(160)] = 11084,
  [SMALL_STATE(161)] = 11122,
  [SMALL_STATE(162)] = 11190,
  [SMALL_STATE(163)] = 11228,
  [SMALL_STATE(164)] = 11266,
  [SMALL_STATE(165)] = 11334,
  [SMALL_STATE(166)] = 11372,
  [SMALL_STATE(167)] = 11410,
  [SMALL_STATE(168)] = 11448,
  [SMALL_STATE(169)] = 11516,
  [SMALL_STATE(170)] = 11584,
  [SMALL_STATE(171)] = 11652,
  [SMALL_STATE(172)] = 11690,
  [SMALL_STATE(173)] = 11728,
  [SMALL_STATE(174)] = 11796,
  [SMALL_STATE(175)] = 11834,
  [SMALL_STATE(176)] = 11872,
  [SMALL_STATE(177)] = 11909,
  [SMALL_STATE(178)] = 11946,
  [SMALL_STATE(179)] = 12011,
  [SMALL_STATE(180)] = 12070,
  [SMALL_STATE(181)] = 12107,
  [SMALL_STATE(182)] = 12144,
  [SMALL_STATE(183)] = 12181,
  [SMALL_STATE(184)] = 12218,
  [SMALL_STATE(185)] = 12255,
  [SMALL_STATE(186)] = 12292,
  [SMALL_STATE(187)] = 12329,
  [SMALL_STATE(188)] = 12366,
  [SMALL_STATE(189)] = 12403,
  [SMALL_STATE(190)] = 12468,
  [SMALL_STATE(191)] = 12505,
  [SMALL_STATE(192)] = 12542,
  [SMALL_STATE(193)] = 12579,
  [SMALL_STATE(194)] = 12616,
  [SMALL_STATE(195)] = 12653,
  [SMALL_STATE(196)] = 12715,
  [SMALL_STATE(197)] = 12777,
  [SMALL_STATE(198)] = 12839,
  [SMALL_STATE(199)] = 12901,
  [SMALL_STATE(200)] = 12963,
  [SMALL_STATE(201)] = 13025,
  [SMALL_STATE(202)] = 13089,
  [SMALL_STATE(203)] = 13151,
  [SMALL_STATE(204)] = 13215,
  [SMALL_STATE(205)] = 13277,
  [SMALL_STATE(206)] = 13332,
  [SMALL_STATE(207)] = 13387,
  [SMALL_STATE(208)] = 13448,
  [SMALL_STATE(209)] = 13499,
  [SMALL_STATE(210)] = 13534,
  [SMALL_STATE(211)] = 13597,
  [SMALL_STATE(212)] = 13660,
  [SMALL_STATE(213)] = 13719,
  [SMALL_STATE(214)] = 13758,
  [SMALL_STATE(215)] = 13803,
  [SMALL_STATE(216)] = 13856,
  [SMALL_STATE(217)] = 13913,
  [SMALL_STATE(218)] = 13948,
  [SMALL_STATE(219)] = 13983,
  [SMALL_STATE(220)] = 14040,
  [SMALL_STATE(221)] = 14075,
  [SMALL_STATE(222)] = 14122,
  [SMALL_STATE(223)] = 14179,
  [SMALL_STATE(224)] = 14228,
  [SMALL_STATE(225)] = 14269,
  [SMALL_STATE(226)] = 14304,
  [SMALL_STATE(227)] = 14360,
  [SMALL_STATE(228)] = 14416,
  [SMALL_STATE(229)] = 14472,
  [SMALL_STATE(230)] = 14528,
  [SMALL_STATE(231)] = 14584,
  [SMALL_STATE(232)] = 14640,
  [SMALL_STATE(233)] = 14696,
  [SMALL_STATE(234)] = 14752,
  [SMALL_STATE(235)] = 14808,
  [SMALL_STATE(236)] = 14864,
  [SMALL_STATE(237)] = 14920,
  [SMALL_STATE(238)] = 14976,
  [SMALL_STATE(239)] = 15032,
  [SMALL_STATE(240)] = 15088,
  [SMALL_STATE(241)] = 15144,
  [SMALL_STATE(242)] = 15200,
  [SMALL_STATE(243)] = 15243,
  [SMALL_STATE(244)] = 15281,
  [SMALL_STATE(245)] = 15319,
  [SMALL_STATE(246)] = 15357,
  [SMALL_STATE(247)] = 15408,
  [SMALL_STATE(248)] = 15447,
  [SMALL_STATE(249)] = 15480,
  [SMALL_STATE(250)] = 15531,
  [SMALL_STATE(251)] = 15566,
  [SMALL_STATE(252)] = 15617,
  [SMALL_STATE(253)] = 15645,
  [SMALL_STATE(254)] = 15673,
  [SMALL_STATE(255)] = 15700,
  [SMALL_STATE(256)] = 15727,
  [SMALL_STATE(257)] = 15754,
  [SMALL_STATE(258)] = 15781,
  [SMALL_STATE(259)] = 15816,
  [SMALL_STATE(260)] = 15844,
  [SMALL_STATE(261)] = 15876,
  [SMALL_STATE(262)] = 15904,
  [SMALL_STATE(263)] = 15932,
  [SMALL_STATE(264)] = 15960,
  [SMALL_STATE(265)] = 15988,
  [SMALL_STATE(266)] = 16016,
  [SMALL_STATE(267)] = 16044,
  [SMALL_STATE(268)] = 16072,
  [SMALL_STATE(269)] = 16100,
  [SMALL_STATE(270)] = 16127,
  [SMALL_STATE(271)] = 16154,
  [SMALL_STATE(272)] = 16181,
  [SMALL_STATE(273)] = 16207,
  [SMALL_STATE(274)] = 16233,
  [SMALL_STATE(275)] = 16259,
  [SMALL_STATE(276)] = 16285,
  [SMALL_STATE(277)] = 16311,
  [SMALL_STATE(278)] = 16337,
  [SMALL_STATE(279)] = 16363,
  [SMALL_STATE(280)] = 16388,
  [SMALL_STATE(281)] = 16413,
  [SMALL_STATE(282)] = 16438,
  [SMALL_STATE(283)] = 16463,
  [SMALL_STATE(284)] = 16488,
  [SMALL_STATE(285)] = 16513,
  [SMALL_STATE(286)] = 16538,
  [SMALL_STATE(287)] = 16563,
  [SMALL_STATE(288)] = 16588,
  [SMALL_STATE(289)] = 16613,
  [SMALL_STATE(290)] = 16638,
  [SMALL_STATE(291)] = 16663,
  [SMALL_STATE(292)] = 16688,
  [SMALL_STATE(293)] = 16713,
  [SMALL_STATE(294)] = 16738,
  [SMALL_STATE(295)] = 16763,
  [SMALL_STATE(296)] = 16788,
  [SMALL_STATE(297)] = 16826,
  [SMALL_STATE(298)] = 16852,
  [SMALL_STATE(299)] = 16885,
  [SMALL_STATE(300)] = 16918,
  [SMALL_STATE(301)] = 16950,
  [SMALL_STATE(302)] = 16982,
  [SMALL_STATE(303)] = 17012,
  [SMALL_STATE(304)] = 17040,
  [SMALL_STATE(305)] = 17072,
  [SMALL_STATE(306)] = 17102,
  [SMALL_STATE(307)] = 17131,
  [SMALL_STATE(308)] = 17158,
  [SMALL_STATE(309)] = 17185,
  [SMALL_STATE(310)] = 17214,
  [SMALL_STATE(311)] = 17243,
  [SMALL_STATE(312)] = 17272,
  [SMALL_STATE(313)] = 17301,
  [SMALL_STATE(314)] = 17330,
  [SMALL_STATE(315)] = 17359,
  [SMALL_STATE(316)] = 17388,
  [SMALL_STATE(317)] = 17415,
  [SMALL_STATE(318)] = 17444,
  [SMALL_STATE(319)] = 17473,
  [SMALL_STATE(320)] = 17500,
  [SMALL_STATE(321)] = 17527,
  [SMALL_STATE(322)] = 17554,
  [SMALL_STATE(323)] = 17580,
  [SMALL_STATE(324)] = 17606,
  [SMALL_STATE(325)] = 17632,
  [SMALL_STATE(326)] = 17658,
  [SMALL_STATE(327)] = 17684,
  [SMALL_STATE(328)] = 17702,
  [SMALL_STATE(329)] = 17722,
  [SMALL_STATE(330)] = 17748,
  [SMALL_STATE(331)] = 17774,
  [SMALL_STATE(332)] = 17800,
  [SMALL_STATE(333)] = 17826,
  [SMALL_STATE(334)] = 17848,
  [SMALL_STATE(335)] = 17874,
  [SMALL_STATE(336)] = 17900,
  [SMALL_STATE(337)] = 17926,
  [SMALL_STATE(338)] = 17952,
  [SMALL_STATE(339)] = 17976,
  [SMALL_STATE(340)] = 17996,
  [SMALL_STATE(341)] = 18022,
  [SMALL_STATE(342)] = 18048,
  [SMALL_STATE(343)] = 18074,
  [SMALL_STATE(344)] = 18100,
  [SMALL_STATE(345)] = 18126,
  [SMALL_STATE(346)] = 18146,
  [SMALL_STATE(347)] = 18172,
  [SMALL_STATE(348)] = 18194,
  [SMALL_STATE(349)] = 18220,
  [SMALL_STATE(350)] = 18246,
  [SMALL_STATE(351)] = 18272,
  [SMALL_STATE(352)] = 18298,
  [SMALL_STATE(353)] = 18322,
  [SMALL_STATE(354)] = 18348,
  [SMALL_STATE(355)] = 18374,
  [SMALL_STATE(356)] = 18400,
  [SMALL_STATE(357)] = 18426,
  [SMALL_STATE(358)] = 18452,
  [SMALL_STATE(359)] = 18478,
  [SMALL_STATE(360)] = 18501,
  [SMALL_STATE(361)] = 18524,
  [SMALL_STATE(362)] = 18547,
  [SMALL_STATE(363)] = 18570,
  [SMALL_STATE(364)] = 18593,
  [SMALL_STATE(365)] = 18616,
  [SMALL_STATE(366)] = 18633,
  [SMALL_STATE(367)] = 18656,
  [SMALL_STATE(368)] = 18679,
  [SMALL_STATE(369)] = 18696,
  [SMALL_STATE(370)] = 18719,
  [SMALL_STATE(371)] = 18742,
  [SMALL_STATE(372)] = 18762,
  [SMALL_STATE(373)] = 18782,
  [SMALL_STATE(374)] = 18800,
  [SMALL_STATE(375)] = 18820,
  [SMALL_STATE(376)] = 18840,
  [SMALL_STATE(377)] = 18858,
  [SMALL_STATE(378)] = 18878,
  [SMALL_STATE(379)] = 18898,
  [SMALL_STATE(380)] = 18918,
  [SMALL_STATE(381)] = 18938,
  [SMALL_STATE(382)] = 18958,
  [SMALL_STATE(383)] = 18978,
  [SMALL_STATE(384)] = 18994,
  [SMALL_STATE(385)] = 19014,
  [SMALL_STATE(386)] = 19034,
  [SMALL_STATE(387)] = 19052,
  [SMALL_STATE(388)] = 19072,
  [SMALL_STATE(389)] = 19092,
  [SMALL_STATE(390)] = 19112,
  [SMALL_STATE(391)] = 19132,
  [SMALL_STATE(392)] = 19150,
  [SMALL_STATE(393)] = 19170,
  [SMALL_STATE(394)] = 19190,
  [SMALL_STATE(395)] = 19208,
  [SMALL_STATE(396)] = 19228,
  [SMALL_STATE(397)] = 19246,
  [SMALL_STATE(398)] = 19262,
  [SMALL_STATE(399)] = 19278,
  [SMALL_STATE(400)] = 19298,
  [SMALL_STATE(401)] = 19314,
  [SMALL_STATE(402)] = 19330,
  [SMALL_STATE(403)] = 19346,
  [SMALL_STATE(404)] = 19366,
  [SMALL_STATE(405)] = 19386,
  [SMALL_STATE(406)] = 19406,
  [SMALL_STATE(407)] = 19424,
  [SMALL_STATE(408)] = 19444,
  [SMALL_STATE(409)] = 19459,
  [SMALL_STATE(410)] = 19476,
  [SMALL_STATE(411)] = 19491,
  [SMALL_STATE(412)] = 19508,
  [SMALL_STATE(413)] = 19525,
  [SMALL_STATE(414)] = 19540,
  [SMALL_STATE(415)] = 19555,
  [SMALL_STATE(416)] = 19572,
  [SMALL_STATE(417)] = 19587,
  [SMALL_STATE(418)] = 19604,
  [SMALL_STATE(419)] = 19621,
  [SMALL_STATE(420)] = 19636,
  [SMALL_STATE(421)] = 19651,
  [SMALL_STATE(422)] = 19666,
  [SMALL_STATE(423)] = 19681,
  [SMALL_STATE(424)] = 19696,
  [SMALL_STATE(425)] = 19713,
  [SMALL_STATE(426)] = 19730,
  [SMALL_STATE(427)] = 19747,
  [SMALL_STATE(428)] = 19764,
  [SMALL_STATE(429)] = 19781,
  [SMALL_STATE(430)] = 19796,
  [SMALL_STATE(431)] = 19813,
  [SMALL_STATE(432)] = 19830,
  [SMALL_STATE(433)] = 19847,
  [SMALL_STATE(434)] = 19864,
  [SMALL_STATE(435)] = 19879,
  [SMALL_STATE(436)] = 19896,
  [SMALL_STATE(437)] = 19911,
  [SMALL_STATE(438)] = 19926,
  [SMALL_STATE(439)] = 19943,
  [SMALL_STATE(440)] = 19958,
  [SMALL_STATE(441)] = 19973,
  [SMALL_STATE(442)] = 19990,
  [SMALL_STATE(443)] = 20007,
  [SMALL_STATE(444)] = 20021,
  [SMALL_STATE(445)] = 20035,
  [SMALL_STATE(446)] = 20049,
  [SMALL_STATE(447)] = 20063,
  [SMALL_STATE(448)] = 20077,
  [SMALL_STATE(449)] = 20091,
  [SMALL_STATE(450)] = 20105,
  [SMALL_STATE(451)] = 20119,
  [SMALL_STATE(452)] = 20133,
  [SMALL_STATE(453)] = 20147,
  [SMALL_STATE(454)] = 20161,
  [SMALL_STATE(455)] = 20175,
  [SMALL_STATE(456)] = 20189,
  [SMALL_STATE(457)] = 20203,
  [SMALL_STATE(458)] = 20217,
  [SMALL_STATE(459)] = 20231,
  [SMALL_STATE(460)] = 20245,
  [SMALL_STATE(461)] = 20259,
  [SMALL_STATE(462)] = 20273,
  [SMALL_STATE(463)] = 20287,
  [SMALL_STATE(464)] = 20301,
  [SMALL_STATE(465)] = 20315,
  [SMALL_STATE(466)] = 20329,
  [SMALL_STATE(467)] = 20343,
  [SMALL_STATE(468)] = 20357,
  [SMALL_STATE(469)] = 20371,
  [SMALL_STATE(470)] = 20385,
  [SMALL_STATE(471)] = 20399,
  [SMALL_STATE(472)] = 20413,
  [SMALL_STATE(473)] = 20427,
  [SMALL_STATE(474)] = 20441,
  [SMALL_STATE(475)] = 20455,
  [SMALL_STATE(476)] = 20469,
  [SMALL_STATE(477)] = 20485,
  [SMALL_STATE(478)] = 20499,
  [SMALL_STATE(479)] = 20513,
  [SMALL_STATE(480)] = 20527,
  [SMALL_STATE(481)] = 20541,
  [SMALL_STATE(482)] = 20555,
  [SMALL_STATE(483)] = 20569,
  [SMALL_STATE(484)] = 20583,
  [SMALL_STATE(485)] = 20597,
  [SMALL_STATE(486)] = 20611,
  [SMALL_STATE(487)] = 20625,
  [SMALL_STATE(488)] = 20639,
  [SMALL_STATE(489)] = 20653,
  [SMALL_STATE(490)] = 20667,
  [SMALL_STATE(491)] = 20681,
  [SMALL_STATE(492)] = 20695,
  [SMALL_STATE(493)] = 20709,
  [SMALL_STATE(494)] = 20723,
  [SMALL_STATE(495)] = 20737,
  [SMALL_STATE(496)] = 20751,
  [SMALL_STATE(497)] = 20765,
  [SMALL_STATE(498)] = 20779,
  [SMALL_STATE(499)] = 20793,
  [SMALL_STATE(500)] = 20807,
  [SMALL_STATE(501)] = 20821,
  [SMALL_STATE(502)] = 20835,
  [SMALL_STATE(503)] = 20849,
  [SMALL_STATE(504)] = 20863,
  [SMALL_STATE(505)] = 20877,
  [SMALL_STATE(506)] = 20891,
  [SMALL_STATE(507)] = 20905,
  [SMALL_STATE(508)] = 20919,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(452),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(454),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(221),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(155),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(415),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(366),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(321),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(368),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(452),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(65),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(45),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(370),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(453),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(78),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(454),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(455),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(41),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(66),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(247),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 4, .dynamic_precedence = 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 4, .dynamic_precedence = 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 5, .dynamic_precedence = 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 5, .dynamic_precedence = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 4, .dynamic_precedence = 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 4, .dynamic_precedence = 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 3, .dynamic_precedence = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 3, .dynamic_precedence = 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 3, .dynamic_precedence = 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 3, .dynamic_precedence = 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 4),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_list, 5, .dynamic_precedence = 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_list, 5, .dynamic_precedence = 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_elaborated_ident, 2),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_elaborated_ident, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_template_elaborated_ident, 1), REDUCE(sym__expression, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_elaborated_ident, 1),
  [288] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_template_elaborated_ident, 1), REDUCE(sym__expression, 1), SHIFT(33),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_template_elaborated_ident, 1), REDUCE(sym__expression, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(451),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(86),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_or_swizzle_specifier, 1, .production_id = 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_or_swizzle_specifier, 1, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_phrase, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_phrase, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 3, .production_id = 7),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 3, .production_id = 7),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expression, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expression, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 5),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hex_float_literal, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__hex_float_literal, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_float_literal, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_float_literal, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decimal_int_literal, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decimal_int_literal, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_expression_list, 4),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_expression_list, 4),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_type_specifier, 1), REDUCE(sym__expression, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_singular_expression, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_singular_expression, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 21),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 21),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [424] = {.entry = {.count = 3, .reusable = false}}, REDUCE(sym_template_elaborated_ident, 1), REDUCE(sym__expression, 1), SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 16),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 16),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 17),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 17),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(482),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(62),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 26),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_selectors, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__switch_body, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__switch_body, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, .production_id = 22),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, .production_id = 22),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 3),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 5),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__switch_body, 4),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__switch_body, 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 4),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 4),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 6),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 6),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 28),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 28),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 4),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 4),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_statement, 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_statement, 7),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(288),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(500),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(499),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(412),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(366),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(417),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(66),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(490),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 2), SHIFT_REPEAT(247),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_translation_unit, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_list_repeat1, 2, .dynamic_precedence = 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3, .production_id = 15),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_assignment_operator, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment_operator, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_value_decl, 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_assert_statement, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_or_value_statement, 4),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_or_value_statement, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_value_decl, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(506),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(502),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 2), SHIFT_REPEAT(411),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 3),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 4),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(498),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_or_swizzle_specifier_repeat1, 2, .production_id = 4), SHIFT_REPEAT(88),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lhs_expression, 5),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_directive, 5),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_requires_directive, 5),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_member_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_member_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_member_repeat1, 2), SHIFT_REPEAT(247),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_directive, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enable_directive, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_directive, 3),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_requires_directive, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_directive, 3),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diagnostic_directive, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_directive, 1),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_directive, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requires_directive, 4),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_requires_directive, 4),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_directive, 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enable_directive, 4),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_directive, 5),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enable_directive, 5),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrib_end, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrib_end, 2),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__attrib_end, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attrib_end, 1),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_diagnostic_control, 5),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_control, 5),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 7),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 7),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 4),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [777] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 5),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 5),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [785] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_struct_member_repeat1, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_member_repeat1, 1),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 9),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 9),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 7, .production_id = 14),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 7, .production_id = 14),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 8, .production_id = 18),
  [803] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 8, .production_id = 18),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 6, .production_id = 11),
  [807] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 6, .production_id = 11),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 9, .production_id = 24),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 9, .production_id = 24),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 5, .production_id = 8),
  [815] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 5, .production_id = 8),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 8, .production_id = 20),
  [819] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 8, .production_id = 20),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 7, .production_id = 6),
  [823] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_decl, 7, .production_id = 6),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 8, .production_id = 19),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 8, .production_id = 19),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 6, .production_id = 10),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 6, .production_id = 10),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_translation_unit_repeat2, 1),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat2, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 9, .production_id = 25),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 9, .production_id = 25),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 9, .production_id = 23),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 9, .production_id = 23),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 7, .production_id = 13),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 7, .production_id = 13),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 6, .production_id = 6),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_decl, 6, .production_id = 6),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_translation_unit_repeat2, 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_decl, 5, .production_id = 6),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_decl, 5, .production_id = 6),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_decl, 10, .production_id = 27),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_decl, 10, .production_id = 27),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__switch_body_repeat1, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__switch_body_repeat1, 2), SHIFT_REPEAT(24),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__switch_body_repeat1, 2), SHIFT_REPEAT(318),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [935] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_selectors_repeat1, 2), SHIFT_REPEAT(43),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 2), SHIFT_REPEAT(368),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lhs_expression_repeat1, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2), SHIFT_REPEAT(326),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_typed_ident, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_alone_clause, 2),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enable_directive_repeat1, 2),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enable_directive_repeat1, 2), SHIFT_REPEAT(462),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_expression_list_repeat1, 2), SHIFT_REPEAT(70),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1036] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_list_repeat1, 2), SHIFT_REPEAT(32),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_list_repeat1, 2),
  [1041] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2), SHIFT_REPEAT(336),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_decl_repeat1, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_clause, 1),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 4),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__switch_body_repeat1, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_clause, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_alone_clause, 3),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_rule_name, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 3, .production_id = 9),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagnostic_rule_name, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 1),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_updating_statement, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_list_repeat1, 2, .dynamic_precedence = 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_statement, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_value_decl, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_variable_decl, 2),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 4, .production_id = 12),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_or_value_statement, 1),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 1),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionally_typed_ident, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 4),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_decl, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_value_decl, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_alias_decl, 4),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 2),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_severity_control_name, 1),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 5),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_if_statement, 4),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_header, 5),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(508),
  [1182] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 4),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_statement, 2),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuing_compound_statement, 3),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_init, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_update, 1),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 2),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__block_comment = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__block_comment] = sym__block_comment,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__block_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wgsl_external_scanner_create(void);
void tree_sitter_wgsl_external_scanner_destroy(void *);
bool tree_sitter_wgsl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wgsl_external_scanner_serialize(void *, char *);
void tree_sitter_wgsl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wgsl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wgsl_external_scanner_create,
      tree_sitter_wgsl_external_scanner_destroy,
      tree_sitter_wgsl_external_scanner_scan,
      tree_sitter_wgsl_external_scanner_serialize,
      tree_sitter_wgsl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
