<?php
$num = (int)readline('Enter a Number: ');
$fact = 1;
for($i = 1; $i <= $num; $i++){
    $fact = $fact * $i;      
}
echo "Factorial of the number is: ",$fact;
?>