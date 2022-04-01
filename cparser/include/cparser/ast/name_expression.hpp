#pragma once

#include "cparser/ast/expression.hpp"
#include "cparser/token.hpp"
namespace cc::ast {

class name_expression final : public expression_syntax {
    token m_identifier_token;

  public:
    explicit name_expression(token&& identifier_token) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;

    const token& identifier_token() const noexcept;
};

} // namespace cc::ast
