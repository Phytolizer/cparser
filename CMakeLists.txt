cmake_minimum_required(VERSION 3.18)

if (WIN32)
    add_subdirectory(deps/wingetopt)
endif ()

project(cparser)

add_executable(cparser main.cpp compiler.cpp)
target_compile_features(cparser PRIVATE cxx_std_20)

find_package(fmt REQUIRED)
target_link_libraries(cparser PRIVATE fmt::fmt)

if (UNIX)
    target_compile_definitions(cparser PRIVATE UNIX)
elseif (WIN32)
    target_compile_definitions(cparser PRIVATE WIN32)
    target_link_libraries(cparser PRIVATE wingetopt)
endif ()
