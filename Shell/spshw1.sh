read -p "Enter a number " num
sum=0
i=1

while [ $i -le $((num / 2)) ]
do
	if [[ $((num%i)) -eq 0 ]]
	then
		sum=$((sum + i))
	fi
	i=$((i+1))
done

if [ $num -eq $sum ]
then
	echo "$num is perfect number"
else
	echo "$num is not perfect number"
fi
