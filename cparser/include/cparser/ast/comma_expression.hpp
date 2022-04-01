#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"

#include <memory>

namespace cc::ast {

class comma_expression final : public expression_syntax {
    std::unique_ptr<expression_syntax> m_left;
    token m_comma_token;
    std::unique_ptr<expression_syntax> m_right;

  public:
    comma_expression(std::unique_ptr<expression_syntax> left, token&& comma_token,
            std::unique_ptr<expression_syntax> right) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const expression_syntax& left() const noexcept;
    const token& comma_token() const noexcept;
    const expression_syntax& right() const noexcept;
};

} // namespace cc::ast
