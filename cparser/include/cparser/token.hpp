#pragma once

#include "cparser/syntax_node.hpp"
#include "cparser/trivia.hpp"
#include "fmt/core.h"
#include "source_span.hpp"
#include "syntax_kind.hpp"

#include <ostream>
#include <string>
#include <vector>

namespace cc {

class token final : public syntax_node {
  private:
    syntax_kind m_kind;

  public:
    source_span span;
    std::string text;
    std::vector<trivia> leading_trivia;
    std::vector<trivia> trailing_trivia;

    token() noexcept;
    token(syntax_kind kind, source_span span, std::string text,
            std::vector<trivia>&& leading_trivia, std::vector<trivia>&& trailing_trivia) noexcept;

    syntax_kind kind() const noexcept override;
    std::vector<const syntax_node*> children() const noexcept override;
};

} // namespace cc

std::ostream& operator<<(std::ostream& os, const cc::token& tok);

template <> struct fmt::formatter<cc::token> {
    template <typename ParseContext> constexpr auto parse(ParseContext& ctx) {
        return ctx.begin();
    }

    template <typename FormatContext> auto format(const cc::token& tok, FormatContext& ctx) {
        return format_to(ctx.out(), "{} '{}'", tok.kind(), tok.text);
    }
};
