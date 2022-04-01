#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <vector>
namespace cc::ast {

class assignment_expression final : public expression_syntax {
    std::unique_ptr<expression_syntax> m_assignee;
    token m_operator_token;
    std::unique_ptr<expression_syntax> m_value;

  public:
    assignment_expression(std::unique_ptr<expression_syntax> assignee, token operator_token,
            std::unique_ptr<expression_syntax> value);

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression_syntax& assignee() const noexcept;
    const token& operator_token() const noexcept;
    const expression_syntax& value() const noexcept;
};

} // namespace cc::ast
