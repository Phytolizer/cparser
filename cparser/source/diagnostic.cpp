#include "cparser/diagnostic.hpp"

cc::diagnostic::diagnostic(source_span span, std::string&& message) noexcept
    : span(span), message(std::move(message)) {}
