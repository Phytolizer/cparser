#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <vector>

namespace cc::ast {

class parenthesized_expression final : public expression {
    token m_open_parenthesis_token;
    std::unique_ptr<expression> m_expression;
    token m_close_parenthesis_token;

  public:
    parenthesized_expression(token&& open_parenthesis_token,
            std::unique_ptr<expression>&& expression, token&& close_parenthesis_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const token& open_parenthesis_token() const noexcept;
    const expression& expression() const noexcept;
    const token& close_parenthesis_token() const noexcept;
};

} // namespace cc::ast
