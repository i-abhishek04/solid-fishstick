#!/bin/bash
read -p "Enter num1 " a
read -p "Enter num2 " b
((sum = $a+$b))
echo "Sum of $a and $b is $sum"
