add_library("cparser" INTERFACE "include/cparser/syntax_kind.hpp")
target_include_directories("cparser" INTERFACE "include")

target_link_libraries("cparser" INTERFACE "magic_enum::magic_enum")

add_library("cparser::cparser" ALIAS "cparser")
