#pragma once

#include "cparser/token.hpp"

#include <cstddef>
#include <iterator>
#include <ranges>
#include <string>

namespace cpr {

class lexer final {
    std::string m_source_text;

  public:
    class iterator {
        std::string::const_iterator m_begin;
        std::string::const_iterator m_current;
        std::string::const_iterator m_end;
        bool m_is_end;
        token m_just_scanned;

        token scan_token() noexcept;
        void scan_comment() noexcept;
        std::string::const_iterator look(std::ptrdiff_t offset = 1) const noexcept;

      public:
        using iterator_category = std::input_iterator_tag;
        using value_type = token;
        using difference_type = std::ptrdiff_t;

        iterator(std::string::const_iterator begin, std::string::const_iterator end) noexcept;
        iterator();

        bool operator==(const iterator& other) const noexcept;
        iterator& operator++() noexcept;
        iterator operator++(int) noexcept;
        token operator*() const noexcept;
    };

    explicit lexer(std::string&& source_text) noexcept;

    iterator begin() const noexcept;
    iterator end() const noexcept;
};

static_assert(std::ranges::range<lexer>);

} // namespace cpr
