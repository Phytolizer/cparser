#pragma once

#include "magic_enum.hpp"

namespace cpr {

enum class token_kind {
    // Keywords
    kw_auto,
    kw_double,
    kw_int,
    kw_struct,
    kw_break,
    kw_else,
    kw_long,
    kw_switch,
    kw_case,
    kw_enum,
    kw_register,
    kw_typedef,
    kw_char,
    kw_extern,
    kw_return,
    kw_union,
    kw_const,
    kw_float,
    kw_short,
    kw_unsigned,
    kw_continue,
    kw_for,
    kw_signed,
    kw_void,
    kw_default,
    kw_goto,
    kw_sizeof,
    kw_volatile,
    kw_do,
    kw_if,
    kw_static,
    kw_while,

    // Special tokens
    identifier,
    angled_header_name,

    // Constants
    floating_constant,
    integer_constant,
    character_constant,
    string_literal,

    // Operators
    left_bracket,
    right_bracket,
    left_parenthesis,
    right_parenthesis,
    period,
    arrow,
    plus_plus,
    minus_minus,
    ampersand,
    asterisk,
    plus,
    minus,
    tilde,
    exclamation,
    slash,
    percent,
    left_left,
    right_right,
    left,
    right,
    left_equals,
    right_equals,
    equals_equals,
    exclamation_equals,
    caret,
    pipe,
    ampersand_ampersand,
    pipe_pipe,
    question,
    colon,
    equals,
    asterisk_equals,
    slash_equals,
    percent_equals,
    plus_equals,
    minus_equals,
    left_left_equals,
    right_right_equals,
    ampersand_equals,
    caret_equals,
    pipe_equals,
    comma,
    hash,
    hash_hash,

    // Punctuators
    left_brace,
    right_brace,
    semicolon,
    ellipsis,

    // Marker tokens
    eof,
    bad,
};

} // namespace cpr
