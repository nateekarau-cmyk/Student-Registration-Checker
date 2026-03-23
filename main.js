const prompt = require("prompt-sync")();

let name = prompt("Enter student name: ");
let units = parseInt(prompt("Enter number of registered units: "));

let status;

if (units > 7) {
    status = "Overload - Approval Required";
} else {
    status = "Registration Accepted";
}

console.log("\n--- Registration Summary ---");
console.log("Student Name:", name);
console.log("Units:", units);
console.log("Status:", status);