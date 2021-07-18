#ifdef UNIX
#include <getopt.h>
#elif defined(WIN32)
#include <getopt.h>
#endif

#include <array>
#include <fmt/format.h>
#include <string>
#include <vector>
#include "compiler.hpp"

constexpr std::array long_opts{
    option{.name = "file", .has_arg = true, .val = 'f'},
    option{.name = "help", .has_arg = false, .val = 'h'},
    option{.name = nullptr, .has_arg = false, .val = -1},
};

static void printUsage()
{
    fmt::print("Usage: {} [options] <FILE...>\n");
}

std::vector<std::string> parseArgs(int argc, char **argv)
{
    int longind;
    int c;
    std::vector<std::string> filenames;
    while ((c = getopt_long(argc, argv, "f:h", long_opts.data(), &longind)) != -1)
    {
        switch (c)
        {
        case 'f':
            filenames.emplace_back(optarg);
            break;
        case 'h':
            printUsage();
            exit(0);
        default:
            printUsage();
            exit(1);
        }
    }
    for (int i = optind; i < argc; ++i)
    {
        filenames.emplace_back(argv[i]);
    }

    return filenames;
}

int main(int argc, char **argv)
{
    std::vector<std::string> filenames = parseArgs(argc, argv);
    for (const auto &filename : filenames)
    {
        compile(filename);
    }
    return 0;
}
