let secret = Math.floor(Math.random() * 10) + 1;

let guess = Number(prompt("Guess a number between 1 and 10:"));

if (guess === secret) {
    console.log("🎉 Correct!");
} else if (guess < secret) {
    console.log("Too low! Number was:", secret);
} else {
    console.log("Too high! Number was:", secret);
}
