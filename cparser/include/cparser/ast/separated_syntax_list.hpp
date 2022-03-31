#pragma once

#include "cparser/syntax_node.hpp"
#include "cparser/token.hpp"

#include <concepts>
#include <cstddef>
#include <iterator>
#include <memory>
#include <vector>

namespace cc::ast {

template <typename T>
requires std::derived_from<T, syntax_node>
class separated_syntax_list final {
    std::vector<std::unique_ptr<syntax_node>> m_separators_and_nodes;

  public:
    explicit separated_syntax_list(
            std::vector<std::unique_ptr<syntax_node>>&& separators_and_nodes) noexcept
        : m_separators_and_nodes(std::move(separators_and_nodes)) {}

    std::size_t count() const noexcept {
        return (m_separators_and_nodes.size() + 1) / 2;
    }
    const T& operator[](std::size_t index) const noexcept {
        return dynamic_cast<const T&>(*m_separators_and_nodes[index * 2]);
    }
    const token& get_separator(std::size_t index) const noexcept {
        return dynamic_cast<const token&>(*m_separators_and_nodes[index * 2 + 1]);
    }

    class iterator final {
        const separated_syntax_list<T>* m_list;
        std::size_t m_index;

      public:
        using value_type = T;
        using difference_type = std::ptrdiff_t;
        using iterator_category = std::random_access_iterator_tag;

        explicit iterator(const separated_syntax_list<T>* list) noexcept
            : m_list(list), m_index(0) {
            if (m_list->count() == 0) {
                m_list = nullptr;
            }
        }
        iterator() : m_list(nullptr) {}

        const value_type& operator*() const {
            return (*m_list)[m_index];
        }

        iterator& operator++() {
            if (m_list != nullptr) {
                ++m_index;
                if (m_index == m_list->count()) {
                    m_list = nullptr;
                }
            }
            return *this;
        }
        iterator operator++(int) {
            iterator copy = *this;
            ++(*this);
            return copy;
        }
        constexpr bool operator==(const iterator& other) const noexcept {
            if (m_list == nullptr) {
                return other.m_list == nullptr;
            }

            return m_list == other.m_list && m_index == other.m_index;
        }
    };

    iterator begin() const {
        return iterator{this};
    }
    iterator end() const {
        return iterator{};
    }

    const std::vector<std::unique_ptr<syntax_node>>& separators_and_nodes() const noexcept {
        return m_separators_and_nodes;
    }
};

static_assert(std::ranges::range<separated_syntax_list<token>>);

} // namespace cc::ast
