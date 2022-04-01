#pragma once

#include "cparser/diagnostic_bag.hpp"
#include "cparser/source_span.hpp"
#include "cparser/syntax_kind.hpp"
#include "cparser/token.hpp"
#include "cparser/trivia.hpp"

#include <cstddef>
#include <iterator>
#include <ranges>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace cc {

class lexer final {
    std::string m_source_text;
    diagnostic_bag m_diagnostics;

  public:
    class iterator {
        std::string::const_iterator m_begin;
        std::string::const_iterator m_token_start;
        std::string::const_iterator m_current;
        std::string::const_iterator m_end;
        syntax_kind m_kind;
        diagnostic_bag* m_diagnostics;
        bool m_is_end;
        std::vector<trivia> m_trivia_builder;
        token m_just_scanned;

        token scan() noexcept;
        void scan_trivia(bool leading) noexcept;
        void scan_token() noexcept;
        void scan_whitespace() noexcept;
        void scan_comment() noexcept;
        void scan_identifier() noexcept;
        void scan_number() noexcept;
        void scan_character_literal() noexcept;
        void scan_string_literal() noexcept;
        void scan_escape_sequence() noexcept;
        syntax_kind recognize_keyword(std::string_view text) const noexcept;
        char look(std::ptrdiff_t offset = 1) const noexcept;
        char current() const noexcept;
        source_span current_span() const noexcept;
        std::string_view current_text() const noexcept;
        void advance(std::ptrdiff_t count = 1) noexcept;

      public:
        using iterator_category = std::input_iterator_tag;
        using value_type = token;
        using difference_type = std::ptrdiff_t;

        iterator(std::string::const_iterator begin, std::string::const_iterator end,
                diagnostic_bag* diagnostics) noexcept;
        iterator();

        bool operator==(const iterator& other) const noexcept;
        iterator& operator++() noexcept;
        iterator operator++(int) noexcept;
        token operator*() const noexcept;
        const token* operator->() const noexcept;
    };

    explicit lexer(std::string&& source_text) noexcept;

    iterator begin() noexcept;
    iterator end() const noexcept;

    std::span<const diagnostic> diagnostics() const noexcept;
};

static_assert(std::ranges::range<lexer>);

} // namespace cc
