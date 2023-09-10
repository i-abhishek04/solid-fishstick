read -p "Enter a number " num
sq=$[ $num * $num ]
sum=0
while [ $sq != 0 ]
do 
	sum=$[ $sum + $[ $sq % 10 ]]
	sq=$[ $sq / 10 ]
done

if [ $num == $sum ]
then
	echo "$num is a neon number"
else
	echo "$num is not a neon number"
fi
