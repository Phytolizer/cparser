#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <vector>
namespace cc::ast {

class array_index_expression final : public expression {
    std::unique_ptr<expression> m_array;
    token m_open_bracket_token;
    std::unique_ptr<expression> m_index;
    token m_close_bracket_token;

  public:
    array_index_expression(std::unique_ptr<expression> array, token&& open_bracket_token,
            std::unique_ptr<expression> index, token&& close_bracket_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& array() const noexcept;
    const token& open_bracket_token() const noexcept;
    const expression& index() const noexcept;
    const token& close_bracket_token() const noexcept;
};

} // namespace cc::ast
