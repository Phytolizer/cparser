#include "cparser/ast/member_access_expression.hpp"

cc::ast::member_access_expression::member_access_expression(
        std::unique_ptr<ast::expression> expression, token punctuator, token identifier) noexcept
    : m_expression(std::move(expression)), m_punctuator(punctuator), m_identifier(identifier) {}

cc::syntax_kind cc::ast::member_access_expression::kind() const noexcept {
    return syntax_kind::member_access_expression;
}

std::vector<const cc::syntax_node*> cc::ast::member_access_expression::children() const noexcept {
    return {m_expression.get(), &m_punctuator, &m_identifier};
}

const cc::ast::expression& cc::ast::member_access_expression::expression() const noexcept {
    return *m_expression;
}

const cc::token& cc::ast::member_access_expression::punctuator() const noexcept {
    return m_punctuator;
}

const cc::token& cc::ast::member_access_expression::identifier() const noexcept {
    return m_identifier;
}
