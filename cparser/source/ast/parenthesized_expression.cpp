#include "cparser/ast/parenthesized_expression.hpp"

cc::ast::parenthesized_expression::parenthesized_expression(token&& open_parenthesis_token,
        std::unique_ptr<ast::expression>&& expression, token&& close_parenthesis_token) noexcept
    : m_open_parenthesis_token(std::move(open_parenthesis_token)),
      m_expression(std::move(expression)),
      m_close_parenthesis_token(std::move(close_parenthesis_token)) {}

cc::syntax_kind cc::ast::parenthesized_expression::kind() const noexcept {
    return syntax_kind::parenthesized_expression;
}

std::vector<const cc::syntax_node*> cc::ast::parenthesized_expression::children() const noexcept {
    return {
            &m_open_parenthesis_token,
            m_expression.get(),
            &m_close_parenthesis_token,
    };
}

const cc::token& cc::ast::parenthesized_expression::open_parenthesis_token() const noexcept {
    return m_open_parenthesis_token;
}

const cc::ast::expression& cc::ast::parenthesized_expression::expression() const noexcept {
    return *m_expression;
}

const cc::token& cc::ast::parenthesized_expression::close_parenthesis_token() const noexcept {
    return m_close_parenthesis_token;
}
