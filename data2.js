let a = Number(prompt("Enter first number:"));
let operator = prompt("Enter operator (+, -, *, /):");
let b = Number(prompt("Enter second number:"));

let result;

if (operator === "+") {
    result = a + b;
} else if (operator === "-") {
    result = a - b;
} else if (operator === "*") {
    result = a * b;
} else if (operator === "/") {
    result = a / b;
} else {
    result = "Invalid operator";
}

console.log("Result:", result);
