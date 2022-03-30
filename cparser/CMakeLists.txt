add_library(
    "cparser" "source/diagnostic.cpp" "source/diagnostic_bag.cpp"
              "source/lexer.cpp" "source/token.cpp"
)
target_include_directories("cparser" PUBLIC "include")

target_link_libraries("cparser" PUBLIC "fmt::fmt" "magic_enum::magic_enum")

add_library("cparser::cparser" ALIAS "cparser")
