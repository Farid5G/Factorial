let number = [];
let userInp = parseInt(prompt("Enter the Number to find Factorial!!"));
for (let i = 1; i <= userInp; i++) {
  number[i - 1] = i;
}
const fact = number.reduce((prv, curr) => {
  return prv * curr;
});
console.log(`Factorial of ${userInp} is ${fact}`);
