#!/bin/bash

echo Hello user :-\)
echo Enter your name :
read name
read -sp "Enter your password :" pass
echo
read -p "Enter your age :" age
echo Hi $name
if [ $age -ge 18 ]
then
	echo You are eligible to vote
else
	echo You are not eligible to vote
fi
echo "Your password is $pass"
