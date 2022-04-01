#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <memory>
namespace cc::ast {

class conditional_expression final : public expression_syntax {
    std::unique_ptr<expression_syntax> m_condition;
    token m_question_token;
    std::unique_ptr<expression_syntax> m_then_expression;
    token m_colon_token;
    std::unique_ptr<expression_syntax> m_else_expression;

  public:
    conditional_expression(std::unique_ptr<expression_syntax> condition, token&& question_token,
            std::unique_ptr<expression_syntax> then_expression, token&& colon_token,
            std::unique_ptr<expression_syntax> else_expression) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression_syntax& condition() const noexcept;
    const token& question_token() const noexcept;
    const expression_syntax& then_expression() const noexcept;
    const token& colon_token() const noexcept;
    const expression_syntax& else_expression() const noexcept;
};

} // namespace cc::ast
