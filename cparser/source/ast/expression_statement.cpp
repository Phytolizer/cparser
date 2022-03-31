#include "cparser/ast/expression_statement.hpp"

cc::ast::expression_statement::expression_statement(
        std::unique_ptr<ast::expression> expression, token&& semicolon_token) noexcept
    : m_expression(std::move(expression)), m_semicolon_token(std::move(semicolon_token)) {}

cc::syntax_kind cc::ast::expression_statement::kind() const noexcept {
    return syntax_kind::expression_statement;
}

std::vector<const cc::syntax_node*> cc::ast::expression_statement::children() const noexcept {
    return {m_expression.get()};
}

const cc::ast::expression& cc::ast::expression_statement::expression() const noexcept {
    return *m_expression;
}

const cc::token& cc::ast::expression_statement::semicolon_token() const noexcept {
    return m_semicolon_token;
}
