#pragma once

#include <string_view>

namespace p1 {

struct source_file {};

source_file perform(std::string_view raw_text);

} // namespace p1
