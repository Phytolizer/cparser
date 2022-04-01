#include "cparser/ast/assignment_expression.hpp"

cc::ast::assignment_expression::assignment_expression(std::unique_ptr<expression_syntax> assignee,
        token operator_token, std::unique_ptr<expression_syntax> value)
    : m_assignee(std::move(assignee)), m_operator_token(std::move(operator_token)),
      m_value(std::move(value)) {}

cc::syntax_kind cc::ast::assignment_expression::kind() const noexcept {
    return syntax_kind::assignment_expression;
}

std::vector<const cc::syntax_node*> cc::ast::assignment_expression::children() const noexcept {
    return {m_assignee.get(), &m_operator_token, m_value.get()};
}

const cc::ast::expression_syntax& cc::ast::assignment_expression::assignee() const noexcept {
    return *m_assignee;
}

const cc::token& cc::ast::assignment_expression::operator_token() const noexcept {
    return m_operator_token;
}

const cc::ast::expression_syntax& cc::ast::assignment_expression::value() const noexcept {
    return *m_value;
}
