#include "cparser/ast/comma_expression.hpp"

#include <utility>

cc::ast::comma_expression::comma_expression(std::unique_ptr<expression_syntax> left,
        token&& comma_token, std::unique_ptr<expression_syntax> right) noexcept
    : m_left(std::move(left)), m_comma_token(std::move(comma_token)), m_right(std::move(right)) {}

cc::syntax_kind cc::ast::comma_expression::kind() const noexcept {
    return syntax_kind::comma_expression;
}

std::vector<const cc::syntax_node*> cc::ast::comma_expression::children() const noexcept {
    return {m_left.get(), &m_comma_token, m_right.get()};
}

const cc::ast::expression_syntax& cc::ast::comma_expression::left() const noexcept {
    return *m_left;
}

const cc::token& cc::ast::comma_expression::comma_token() const noexcept {
    return m_comma_token;
}

const cc::ast::expression_syntax& cc::ast::comma_expression::right() const noexcept {
    return *m_right;
}
