#include "cparser/ast/binary_expression.hpp"

cc::ast::binary_expression::binary_expression(std::unique_ptr<expression> left,
        token&& operator_token, std::unique_ptr<expression> right) noexcept
    : m_left(std::move(left)), m_operator_token(std::move(operator_token)),
      m_right(std::move(right)) {}

cc::syntax_kind cc::ast::binary_expression::kind() const noexcept {
    return syntax_kind::binary_expression;
}

std::vector<const cc::syntax_node*> cc::ast::binary_expression::children() const noexcept {
    return {m_left.get(), &m_operator_token, m_right.get()};
}

const cc::ast::expression& cc::ast::binary_expression::left() const noexcept {
    return *m_left;
}

const cc::token& cc::ast::binary_expression::operator_token() const noexcept {
    return m_operator_token;
}

const cc::ast::expression& cc::ast::binary_expression::right() const noexcept {
    return *m_right;
}
