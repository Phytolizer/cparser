#include "compiler.hpp"
#include <algorithm>
#include <fstream>
#include <sstream>

static RawSource readSource(std::string_view fileName);

void compile(std::string_view fileName)
{
    RawSource source = readSource(fileName);
}

static RawSource readSource(std::string_view fileName)
{
    std::string line;
    std::vector<std::string> source;
    std::ifstream fileIn{std::string{fileName.begin(), fileName.end()}};
    while (fileIn)
    {
        std::getline(fileIn, line);
        source.emplace_back(std::move(line));
    }
    return RawSource{
        .sourceLines = source,
        .span =
            TextSpan{
                .firstLine = 1,
                .lastLine = source.size(),
                .firstColumn = 1,
                .lastColumn = source.empty() ? 1 : source.back().size(),
            },
    };
}
