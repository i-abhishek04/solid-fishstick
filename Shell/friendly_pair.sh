read -p "Enter a pair of numbers : " a b
suma=0
sumb=0
for i in 1..$[$a/2]
do 
	if [ $[ $a % $i ] == 0 ]
	then
		suma=$[ $suma + $i ]
	fi
done
for i in 1..$[$b/2]
do
	if [ $[ $b % $i ] == 0 ]
	then
		sumb=$[ $sumb + $i ]
	fi
done

if [ $[ $suma / $a] == $[ $sumb / $b ] ]
then 
	echo "$a , $b are friendly pair"
else
	echo "$a , $b are not friendly pair"
fi
