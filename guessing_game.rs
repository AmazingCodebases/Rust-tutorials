use std::io;

fn main() {


println!("Guess The Number!");
println!("Please Input Your Guess");

let mut _guess = String::new();

io::stdin()
.read_line(&mut _guess)
.expect("Failed To Read Line");

println!("You Guessed: {}", _guess);

//return 0;
}
