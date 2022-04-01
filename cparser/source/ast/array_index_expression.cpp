#include "cparser/ast/array_index_expression.hpp"

cc::ast::array_index_expression::array_index_expression(std::unique_ptr<expression_syntax> array,
        token&& open_bracket_token, std::unique_ptr<expression_syntax> index,
        token&& close_bracket_token) noexcept
    : m_array(std::move(array)), m_open_bracket_token(std::move(open_bracket_token)),
      m_index(std::move(index)), m_close_bracket_token(std::move(close_bracket_token)) {}

cc::syntax_kind cc::ast::array_index_expression::kind() const noexcept {
    return syntax_kind::array_index_expression;
}

std::vector<const cc::syntax_node*> cc::ast::array_index_expression::children() const noexcept {
    return {
            m_array.get(),
            &m_open_bracket_token,
            m_index.get(),
            &m_close_bracket_token,
    };
}
