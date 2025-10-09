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

fn print_list<T: std::fmt::Display>(list: &[T]) {
    if let Some((last, elements)) = list.split_last() {
        for aux in elements {
            print!("{aux}-");
        }
        println!("{last}");
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
    println!("OBS.: valores inválidos serão automaticamente convertidos para 0 e por consequência em um erro.");

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
            Ok(num) => {
                if !(num < 1 || num > 6) {
                    list_guess[i] = num;
                }else {
                    list_guess[i] = 0;
                }
                
            }
            Err(_) => list_guess[i] = 0,
        }
    }

    let mut right: u32 = 0;
    let mut wrong: u32 = 0;
    let mut almost: u32 = 0;
    for i in 0..10 {
        if list_guess[i] == list_random[i] {
            right += 1;
        }else {
            wrong += 1;
            if list_guess[i]+1 == list_random[i] || list_guess[i]-1 == list_random[i] {
                almost += 1;
            }
        }
    
    }

    clear();
    print!("Você:");
    print_list(&list_guess);

    print!("Jogo:");
    print_list(&list_random);

    println!("Acertos: {}", right);
    println!("Erros: {}", wrong);
    println!("Quase: {}", almost);

    match right {
        0 => println!("Probabilidade de acertar 0: 1 em 6,19 (16.15%)"),
        1 => println!("Probabilidade de acertar 1: 1 em 3,09 (32.30%)"),
        2 => println!("Probabilidade de acertar 2: 1 em 3,44 (29.07%)"),
        3 => println!("Probabilidade de acertar 3: 1 em 6,45 (15.50%)"),
        4 => println!("Probabilidade de acertar 4: 1 em 18,41 (5.43%)"),
        5 => println!("Probabilidade de acertar 5: 1 em 76,73 (1.30%)"),
        6 => println!("Probabilidade de acertar 6: 1 em 460,2 (0.217%)"),
        7 => println!("Probabilidade de acertar 7: 1 em 4.041,5 (0.0247%)"),
        8 => println!("Probabilidade de acertar 8: 1 em 53.897 (0.001855%)"),
        9 => println!("Probabilidade de acertar 9: 1 em 1.210.680 (0.0000826%)"),
        10 => println!("Probabilidade de acertar 10: 1 em 60.466.176 (0.00000165 %)"),
        _ => {}
        // Probabilidade de acertar exatamente k números em 10 tentativas com 1/6 de chance por posição:
        // (10 choose k) * (1.0/6.0).powi(k) * (5.0/6.0).powi(10 - k)
    }
}