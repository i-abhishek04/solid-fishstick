#!/bin/bash
read -p "Enter a number to print its table " num
for i in 1 2 3 4 5 6 7 8 9 10
do
	res=`expr $i \* $num`
	echo "$num * $i = $res"
done
