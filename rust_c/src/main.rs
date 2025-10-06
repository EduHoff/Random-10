unsafe extern "C" {
    fn init_random();
    fn random(num: i32) -> i32;
}

fn generate_list(list_random: &mut [i32; 10]){
    unsafe { init_random(); }
    for i in 0..list_random.len() {
        list_random[i] = unsafe { random(6) };
    }
}

fn main() {
    println!("Hello, world!");
  
    let mut list_random: [i32; 10] = [0; 10];
    generate_list(&mut list_random);

    for aux in list_random{
        println!("{aux}");
    }
}