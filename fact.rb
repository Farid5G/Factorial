puts "Enter a number to find Factorial: "
num = gets.chomp.to_i
fact = 1
for i in 1..num do
    fact = fact * i
end  
puts "Factorial of the #{num} is: #{fact}"