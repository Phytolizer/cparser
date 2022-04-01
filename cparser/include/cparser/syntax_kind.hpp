#pragma once

#include "fmt/core.h"
#include "magic_enum.hpp"

namespace cc {

enum class syntax_kind {
    // ====
    // Tokens
    // ====

    // Keywords
    // ----
    auto_token,
    double_token,
    int_token,
    struct_token,
    break_token,
    else_token,
    long_token,
    switch_token,
    case_token,
    enum_token,
    register_token,
    typedef_token,
    char_token,
    extern_token,
    return_token,
    union_token,
    const_token,
    float_token,
    short_token,
    unsigned_token,
    continue_token,
    for_token,
    signed_token,
    void_token,
    default_token,
    goto_token,
    sizeof_token,
    volatile_token,
    do_token,
    if_token,
    static_token,
    while_token,

    // Special tokens
    // ----
    identifier_token,

    // Trivia
    // ----
    whitespace_trivia,
    comment_trivia,

    // Constants
    // ----
    floating_constant_token,
    decimal_constant_token,
    hexadecimal_constant_token,
    octal_constant_token,
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

    // Statements
    // ----
    expression_statement,

    // Expressions
    // ----
    literal_expression,
    name_expression,
    parenthesized_expression,
    array_index_expression,
    call_expression,
    member_access_expression,
    increment_expression,
    decrement_expression,
    unary_expression,
    binary_expression,
    conditional_expression,
    assignment_expression,
};

} // namespace cc

template <> struct fmt::formatter<cc::syntax_kind> {
    template <typename ParseContext> constexpr auto parse(ParseContext& ctx) {
        return ctx.begin();
    }

    template <typename FormatContext> auto format(const cc::syntax_kind& kind, FormatContext& ctx) {
        return format_to(ctx.out(), "{}", magic_enum::enum_name(kind));
    }
};
