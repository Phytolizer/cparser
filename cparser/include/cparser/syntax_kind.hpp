#pragma once

#include "magic_enum.hpp"

namespace cpr {

enum class syntax_kind {
    // ====
    // Tokens
    // ====

    // Keywords
    // ----
    kw_auto_token,
    kw_double_token,
    kw_int_token,
    kw_struct_token,
    kw_break_token,
    kw_else_token,
    kw_long_token,
    kw_switch_token,
    kw_case_token,
    kw_enum_token,
    kw_register_token,
    kw_typedef_token,
    kw_char_token,
    kw_extern_token,
    kw_return_token,
    kw_union_token,
    kw_const_token,
    kw_float_token,
    kw_short_token,
    kw_unsigned_token,
    kw_continue_token,
    kw_for_token,
    kw_signed_token,
    kw_void_token,
    kw_default_token,
    kw_goto_token,
    kw_sizeof_token,
    kw_volatile_token,
    kw_do_token,
    kw_if_token,
    kw_static_token,
    kw_while_token,

    // Special tokens
    // ----
    identifier_token,
    angled_header_name_token,

    // Constants
    // ----
    floating_constant_token,
    integer_constant_token,
    character_constant_token,
    string_literal_token,

    // Operators
    // ----
    left_bracket_token,
    right_bracket_token,
    left_parenthesis_token,
    right_parenthesis_token,
    period_token,
    arrow_token,
    plus_plus_token,
    minus_minus_token,
    ampersand_token,
    asterisk_token,
    plus_token,
    minus_token,
    tilde_token,
    exclamation_token,
    slash_token,
    percent_token,
    left_left_token,
    right_right_token,
    left_token,
    right_token,
    left_equals_token,
    right_equals_token,
    equals_equals_token,
    exclamation_equals_token,
    caret_token,
    pipe_token,
    ampersand_ampersand_token,
    pipe_pipe_token,
    question_token,
    colon_token,
    equals_token,
    asterisk_equals_token,
    slash_equals_token,
    percent_equals_token,
    plus_equals_token,
    minus_equals_token,
    left_left_equals_token,
    right_right_equals_token,
    ampersand_equals_token,
    caret_equals_token,
    pipe_equals_token,
    comma_token,
    hash_token,
    hash_hash_token,

    // Punctuators
    // ----
    left_brace_token,
    right_brace_token,
    semicolon_token,
    ellipsis_token,

    // Marker tokens
    // ----
    eof_token,
    bad_token,

    // ====
    // Syntax nodes
    // ====

    // TBD
};

} // namespace cpr
