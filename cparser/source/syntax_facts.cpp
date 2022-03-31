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
            return 1;
        default:
            return 0;
    }
}
