#include "cparser/ast/conditional_expression.hpp"

cc::ast::conditional_expression::conditional_expression(std::unique_ptr<expression> condition,
        token&& question_token, std::unique_ptr<expression> then_expression, token&& colon_token,
        std::unique_ptr<expression> else_expression) noexcept
    : m_condition(std::move(condition)), m_question_token(std::move(question_token)),
      m_then_expression(std::move(then_expression)), m_colon_token(std::move(colon_token)),
      m_else_expression(std::move(else_expression)) {}

cc::syntax_kind cc::ast::conditional_expression::kind() const noexcept {
    return syntax_kind::conditional_expression;
}

std::vector<const cc::syntax_node*> cc::ast::conditional_expression::children() const noexcept {
    return {
            m_condition.get(),
            &m_question_token,
            m_then_expression.get(),
            &m_colon_token,
            m_else_expression.get(),
    };
}

const cc::ast::expression& cc::ast::conditional_expression::condition() const noexcept {
    return *m_condition;
}

const cc::token& cc::ast::conditional_expression::question_token() const noexcept {
    return m_question_token;
}

const cc::ast::expression& cc::ast::conditional_expression::then_expression() const noexcept {
    return *m_then_expression;
}

const cc::token& cc::ast::conditional_expression::colon_token() const noexcept {
    return m_colon_token;
}

const cc::ast::expression& cc::ast::conditional_expression::else_expression() const noexcept {
    return *m_else_expression;
}
