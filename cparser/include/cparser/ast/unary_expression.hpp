#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <vector>

namespace cc::ast {

class unary_expression final : public expression {
    token m_operator_token;
    std::unique_ptr<expression> m_expression;

  public:
    unary_expression(token&& operator_token, std::unique_ptr<expression> expression) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const token& operator_token() const noexcept;
    const expression& expression() const noexcept;
};

} // namespace cc::ast
