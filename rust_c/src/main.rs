unsafe extern "C" {
    fn abi_teste();
}

fn main() {
    println!("Hello, world!");
    unsafe {
        abi_teste();
    }
}