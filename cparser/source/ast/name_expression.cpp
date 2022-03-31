#include "cparser/ast/name_expression.hpp"

cc::ast::name_expression::name_expression(token&& identifier_token) noexcept
    : m_identifier_token(std::move(identifier_token)) {}

cc::syntax_kind cc::ast::name_expression::kind() const noexcept {
    return syntax_kind::name_expression;
}

std::vector<const cc::syntax_node*> cc::ast::name_expression::children() const noexcept {
    return {&m_identifier_token};
}

const cc::token& cc::ast::name_expression::identifier_token() const noexcept {
    return m_identifier_token;
}
