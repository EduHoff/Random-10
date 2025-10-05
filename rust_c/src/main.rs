unsafe extern "C" {
    fn init_random();
    fn random(num: i32) -> i32;
}

fn main() {
    println!("Hello, world!");

    unsafe { init_random(); }
    let teste = unsafe { random(10) };
    println!("{teste}");
    
}