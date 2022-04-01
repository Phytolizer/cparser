#include "cparser/syntax_facts.hpp"
std::size_t cc::facts::unary_operator_precedence(cc::syntax_kind kind) noexcept {
    switch (kind) {
        case syntax_kind::plus_token:
        case syntax_kind::ampersand_token:
        case syntax_kind::asterisk_token:
        case syntax_kind::minus_token:
        case syntax_kind::tilde_token:
        case syntax_kind::exclamation_token:
        case syntax_kind::plus_plus_token:
        case syntax_kind::minus_minus_token:
        case syntax_kind::sizeof_token:
            return 11;
        default:
            return 0;
    }
}

std::size_t cc::facts::binary_operator_precedence(syntax_kind kind) noexcept {
    switch (kind) {
        case syntax_kind::asterisk_token:
        case syntax_kind::slash_token:
        case syntax_kind::percent_token:
            return 10;
        case syntax_kind::plus_token:
        case syntax_kind::minus_token:
            return 9;
        case syntax_kind::left_left_token:
        case syntax_kind::right_right_token:
            return 8;
        case syntax_kind::left_token:
        case syntax_kind::right_token:
        case syntax_kind::left_equals_token:
        case syntax_kind::right_equals_token:
            return 7;
        case syntax_kind::equals_equals_token:
        case syntax_kind::exclamation_equals_token:
            return 6;
        case syntax_kind::ampersand_token:
            return 5;
        case syntax_kind::caret_token:
            return 4;
        case syntax_kind::pipe_token:
            return 3;
        case syntax_kind::ampersand_ampersand_token:
            return 2;
        case syntax_kind::pipe_pipe_token:
            return 1;
        default:
            return 0;
    }
}
