cparser_inc = include_directories('include')

subdir('source')

cparser_lib = static_library(
    'cparser',
    cparser_ast_src,
    cparser_src,
    include_directories : [cparser_inc, configuration_inc],
    dependencies : [magic_enum_dep, fmt_dep, rang_dep]
)

cparser_dep = declare_dependency(
    link_with : cparser_lib,
    include_directories : cparser_inc,
    dependencies : [magic_enum_dep, fmt_dep, rang_dep]
)
