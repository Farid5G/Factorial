print("Enter a Number to find the factorial: ")
var numStr = readLine() ?? ""
let num = Int(numStr) ?? 0
var fact = 1
for i in 1...num{
    fact = fact * i
}
print("Factorial of the \(num) is: \(fact)")