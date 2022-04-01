#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>
namespace cc::ast {

class binary_expression final : public expression {
    std::unique_ptr<expression> m_left;
    token m_operator_token;
    std::unique_ptr<expression> m_right;

  public:
    binary_expression(std::unique_ptr<expression> left, token&& operator_token,
            std::unique_ptr<expression> right) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& left() const noexcept;
    const token& operator_token() const noexcept;
    const expression& right() const noexcept;
};

} // namespace cc::ast
