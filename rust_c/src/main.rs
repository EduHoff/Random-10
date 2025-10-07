use std::{io, process::Command};

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

fn clear() {
    if cfg!(target_os = "windows") {
        Command::new("cmd").args(&["/C", "cls"]).status().unwrap();
    } else {
        Command::new("clear").status().unwrap();
    }
}

fn main() {

    
    clear();
    println!("Este programa ira gerar randomicamente 10 numeros de 1 a 6.");
    println!("Tente acertar os numeros.");

    let mut list_random: [i32; 10] = [0; 10];
    generate_list(&mut list_random);


    let mut list_guess: [i32; 10] = [0; 10]; 
    let mut input = String::new();
    

    for i in 0..10 {
        if i != 0 {clear();}
        println!("Numero {}:", i+1);

        input.clear();
        io::stdin()
            .read_line(&mut input)
            .expect("Falha ao ler linha");

        match input.trim().parse::<i32>() {
            Ok(num) => list_guess[i] = num,
            Err(_) => list_guess[i] = 0,
        }
    }



    for aux in list_random{
        println!("{aux}");
    }
}