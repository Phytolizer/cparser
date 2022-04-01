#include "cparser/ast/decrement_expression.hpp"

cc::ast::decrement_expression::decrement_expression(
        std::unique_ptr<ast::expression_syntax> expression, token&& punctuator) noexcept
    : m_expression(std::move(expression)), m_punctuator(std::move(punctuator)) {}

cc::syntax_kind cc::ast::decrement_expression::kind() const noexcept {
    return syntax_kind::decrement_expression;
}

std::vector<const cc::syntax_node*> cc::ast::decrement_expression::children() const noexcept {
    return {m_expression.get(), &m_punctuator};
}

const cc::ast::expression_syntax& cc::ast::decrement_expression::expression() const noexcept {
    return *m_expression;
}

const cc::token& cc::ast::decrement_expression::punctuator() const noexcept {
    return m_punctuator;
}
