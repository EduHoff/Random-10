fn main() {
    cc::Build::new()
        .file("random.c")
        .compile("random");
}