cmake_minimum_required(VERSION 3.20)

project(
    "cparser"
    LANGUAGES CXX
    VERSION "0.1.0"
    DESCRIPTION "Simple C parser"
    HOMEPAGE_URL "https://github.com/Phytolizer/cparser"
)

include("cmake/CPM.cmake")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

CPMAddPackage(
    NAME "magic_enum"
    GITHUB_REPOSITORY "Neargye/magic_enum"
    GIT_TAG "v0.7.3"
)

CPMAddPackage(
    NAME "fmt"
    GITHUB_REPOSITORY "fmtlib/fmt"
    GIT_TAG "8.1.1"
)

enable_testing()

add_subdirectory("cparser")
add_subdirectory("driver")
