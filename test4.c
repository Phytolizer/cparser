#define regular_macro 0 1 2 3
#define fm1()
#define fm2(a, b, c) a##b
#define fvm1(...) __VA_ARGS__
#define fvm2(a, ...) a##__VA_ARGS__
