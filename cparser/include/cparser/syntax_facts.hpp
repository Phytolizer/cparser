#pragma once

#include "cparser/syntax_kind.hpp"

#include <cstddef>

namespace cc::facts {

std::size_t unary_operator_precedence(syntax_kind kind) noexcept;

}
