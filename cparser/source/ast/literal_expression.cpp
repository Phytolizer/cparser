#include "cparser/ast/literal_expression.hpp"

cc::ast::literal_expression::literal_expression(token&& literal_token) noexcept
    : literal_token(std::move(literal_token)) {}

cc::syntax_kind cc::ast::literal_expression::kind() const noexcept {
    return syntax_kind::literal_expression;
}

std::vector<const cc::syntax_node*> cc::ast::literal_expression::children() const noexcept {
    return {&literal_token};
}
