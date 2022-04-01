#include "cparser/ast/unary_expression.hpp"
cc::ast::unary_expression::unary_expression(
        cc::token&& operator_token, std::unique_ptr<ast::expression_syntax> expression) noexcept
    : m_operator_token(std::move(operator_token)), m_expression(std::move(expression)) {}
cc::syntax_kind cc::ast::unary_expression::kind() const noexcept {
    return syntax_kind::unary_expression;
}
std::vector<const cc::syntax_node*> cc::ast::unary_expression::children() const noexcept {
    return {&m_operator_token, m_expression.get()};
}
const cc::token& cc::ast::unary_expression::operator_token() const noexcept {
    return m_operator_token;
}
const cc::ast::expression_syntax& cc::ast::unary_expression::expression() const noexcept {
    return *m_expression;
}
