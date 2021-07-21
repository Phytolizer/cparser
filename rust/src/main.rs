use std::fs::File;
use std::io::Read;

fn main() {
    let args = clap::App::new("xcc")
        .version(env!("CARGO_PKG_VERSION"))
        .author("Kyle Coffey")
        .about("A very basic C compiler")
        .args_from_usage("<FILE>... 'the files to compile'")
        .get_matches();
    for file in args.values_of_lossy("files").unwrap() {
        compile(file);
    }
}

fn compile(file: String) {
    let preprocessed = preprocess(file);
}

fn preprocess(file: String) -> PreprocessedFile {
    let mut contents = Vec::new();
    File::open(file)
        .unwrap()
        .read_to_end(&mut contents)
        .unwrap();
    let contents = String::from_utf8_lossy(&contents).to_string();
    let tokens = tokenize(&contents);
}

enum TokenKind {
    HeaderName,
    Identifier,
    Number,
    CharacterConstant,
    StringLiteral,
    Punctuator,
    OtherCharacter,
    AutoKw,
    BreakKw,
    CaseKw,
    CharKw,
    ConstKw,
    ContinueKw,
    DefaultKw,
    DoKw,
    DoubleKw,
    ElseKw,
    EnumKw,
    ExternKw,
    FloatKw,
    ForKw,
    GotoKw,
    IfKw,
    InlineKw,
    IntKw,
    LongKw,
    RegisterKw,
    RestrictKw,
    ReturnKw,
    ShortKw,
    SignedKw,
    SizeofKw,
    StaticKw,
    StructKw,
    SwitchKw,
    TypedefKw,
    UnionKw,
    UnsignedKw,
    VoidKw,
    VolatileKw,
    WhileKw,
    AlignasKw,
    AlignofKw,
    AtomicKw,
    BoolKw,
    ComplexKw,
    GenericKw,
    ImaginaryKw,
    NoreturnKw,
    StaticAssertKw,
    ThreadLocalKw,
}

struct Token {
    kind: TokenKind,
    text: String,
}

fn tokenize(contents: &String) -> Vec<Token> {
    todo!()
}
