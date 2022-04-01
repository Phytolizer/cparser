#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <memory>
namespace cc::ast {

class conditional_expression final : public expression {
    std::unique_ptr<expression> m_condition;
    token m_question_token;
    std::unique_ptr<expression> m_then_expression;
    token m_colon_token;
    std::unique_ptr<expression> m_else_expression;

  public:
    conditional_expression(std::unique_ptr<expression> condition, token&& question_token,
            std::unique_ptr<expression> then_expression, token&& colon_token,
            std::unique_ptr<expression> else_expression) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& condition() const noexcept;
    const token& question_token() const noexcept;
    const expression& then_expression() const noexcept;
    const token& colon_token() const noexcept;
    const expression& else_expression() const noexcept;
};

} // namespace cc::ast
