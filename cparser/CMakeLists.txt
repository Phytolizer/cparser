add_library("cparser" "source/lexer.cpp" "source/token.cpp")
target_include_directories("cparser" PUBLIC "include")

target_link_libraries("cparser" PUBLIC "magic_enum::magic_enum")

add_library("cparser::cparser" ALIAS "cparser")
