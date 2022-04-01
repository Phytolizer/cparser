#include "cparser/diagnostic.hpp"
#include "cparser/lexer.hpp"
#include "cparser/parser.hpp"
#include "cparser/source_span.hpp"
#include "cparser/source_text.hpp"
#include "cparser/token.hpp"
#include "fmt/core.h"
#include "rang.hpp"

#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <ranges>
#include <span>
#include <sstream>
#include <string>
#include <vector>

void show_diagnostic(const cc::source_text& source, const cc::diagnostic& diag) {
    auto line_index = source.get_line_index(diag.span.begin);
    auto line_number = line_index + 1;
    auto line = source.lines()[line_index];
    auto character = diag.span.begin - line.begin + 1;
    auto prefix_span = cc::source_span{line.begin, diag.span.begin};
    auto error_span = diag.span;
    auto suffix_span = cc::source_span{diag.span.end, line.end()};

    fmt::print(stderr, "({}, {}): {}\n", line_number, character, diag.message);
    std::cout << "    " << source[prefix_span] << rang::fg::red << source[error_span]
              << rang::fg::reset << source[suffix_span] << '\n';
}

int main(int argc, char** argv) {
    std::span args{argv, static_cast<std::size_t>(argc)};

    if (args.size() > 2) {
        fmt::print(stderr, "Usage: {} [file]\n", args[0]);
        return 1;
    }

    if (args.size() == 2) {
        std::ifstream file{args[1]};
        if (!file) {
            fmt::print(stderr, "Failed to open file: {}\n", args[1]);
            return 1;
        }

        std::ostringstream buffer;
        std::copy(std::istreambuf_iterator{file}, std::istreambuf_iterator<char>{},
                std::ostreambuf_iterator{buffer});

        auto parser = cc::parser{cc::source_text{buffer.str()}};
        auto expression = parser.parse();
        auto diagnostics = parser.take_diagnostics();
        for (const auto& diagnostic : diagnostics.diagnostics()) {
            show_diagnostic(parser.source(), diagnostic);
        }
        return 0;
    }

    std::string line;
    while (true) {
        fmt::print("> ");
        if (!std::getline(std::cin, line)) {
            break;
        }

        cc::parser parser{cc::source_text{std::move(line)}};
        auto expression = parser.parse();
        auto diagnostics = parser.take_diagnostics();
        for (const auto& diagnostic : diagnostics.diagnostics()) {
            show_diagnostic(parser.source(), diagnostic);
        }
        if (diagnostics.diagnostics().empty()) {
            expression->pretty_print();
        }
    }
}
