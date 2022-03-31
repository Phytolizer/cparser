
#include "cparser/ast/call_expression.hpp"

#include "cparser/syntax_node.hpp"

#include <cstddef>

cc::ast::call_expression::call_expression(std::unique_ptr<expression> callee,
        token&& open_parenthesis_token, separated_syntax_list<expression> arguments,
        token&& close_parenthesis_token) noexcept
    : m_callee(std::move(callee)), m_open_parenthesis_token(std::move(open_parenthesis_token)),
      m_arguments(std::move(arguments)),
      m_close_parenthesis_token(std::move(close_parenthesis_token)) {}
cc::syntax_kind cc::ast::call_expression::kind() const noexcept {
    return syntax_kind::call_expression;
}
std::vector<const cc::syntax_node*> cc::ast::call_expression::children() const noexcept {
    std::vector<const syntax_node*> result;
    result.push_back(m_callee.get());
    result.push_back(&m_open_parenthesis_token);
    for (std::size_t i = 0; i < m_arguments.count(); i++) {
        result.push_back(&m_arguments[i]);
        if (i < m_arguments.count() - 1) {
            result.push_back(&m_arguments.get_separator(i));
        }
    }
    result.push_back(&m_close_parenthesis_token);
    return result;
}
const cc::ast::expression& cc::ast::call_expression::callee() const noexcept {
    return *m_callee;
}
const cc::token& cc::ast::call_expression::open_parenthesis_token() const noexcept {
    return m_open_parenthesis_token;
}
const cc::ast::separated_syntax_list<cc::ast::expression>&
cc::ast::call_expression::arguments() const noexcept {
    return m_arguments;
}

const cc::token& cc::ast::call_expression::close_parenthesis_token() const noexcept {
    return m_close_parenthesis_token;
}
