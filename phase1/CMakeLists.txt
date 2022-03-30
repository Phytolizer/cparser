add_library(cparser_phase1 "source/phase1.cpp")
target_include_directories(cparser_phase1 PUBLIC include)

add_library(cparser::phase1 ALIAS cparser_phase1)
