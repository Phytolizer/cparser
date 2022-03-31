#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"

#include <memory>
#include <vector>

namespace cc::ast {

class member_access_expression final : public expression {
    std::unique_ptr<expression> m_expression;
    token m_punctuator;
    token m_identifier;

  public:
    member_access_expression(
            std::unique_ptr<expression> expression, token punctuator, token identifier) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression& expression() const noexcept;
    const token& punctuator() const noexcept;
    const token& identifier() const noexcept;
};

} // namespace cc::ast
