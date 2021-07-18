#ifndef CPARSER_COMPILER_HPP
#define CPARSER_COMPILER_HPP

#include <string>
#include <string_view>
#include <vector>

struct TextSpan
{
    std::size_t firstLine;
    std::size_t lastLine;
    std::size_t firstColumn;
    std::size_t lastColumn;
};

struct RawSource
{
    std::vector<std::string> sourceLines;
    TextSpan span;
};

void compile(std::string_view fileName);

#endif // CPARSER_COMPILER_HPP
