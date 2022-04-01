#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>

namespace cc::ast {

class increment_expression final : public expression {
    std::unique_ptr<expression> m_expression;
    token m_punctuator;

  public:
    increment_expression(std::unique_ptr<expression> expression, token&& punctuator) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& expression() const noexcept;
    const token& punctuator() const noexcept;
};

} // namespace cc::ast