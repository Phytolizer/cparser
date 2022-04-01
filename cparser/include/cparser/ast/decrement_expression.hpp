#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>

namespace cc::ast {

class decrement_expression final : public expression_syntax {
    std::unique_ptr<expression_syntax> m_expression;
    token m_punctuator;

  public:
    decrement_expression(std::unique_ptr<expression_syntax> expression, token&& punctuator) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression_syntax& expression() const noexcept;
    const token& punctuator() const noexcept;
};

} // namespace cc::ast
