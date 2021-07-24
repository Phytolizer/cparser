import nimterop/[
  cimport,
]

static:
  cDebug()
  cDisableCaching()

type yyscan_t = pointer
proc phase3lex_init(scanner: ptr yyscan_t) {. importc .}
cCompile("phase3.yy.c")
cCompile("phase4.tab.c")
cImport(@["phase4.tab.h", "compiler.h"])

var scanner: yyscan_t
phase3lex_init(addr scanner)

proc include_file(name: ptr cchar) {.exportc.} =
  echo name

proc define_simple_macro(name: ptr cchar, body: ptr token_list) {.exportc.} = discard
