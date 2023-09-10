read -p "Enter a number to check evil no: " num
ones=$( echo "obase=2;ibase=10;$num"|bc|grep -o 1|wc -l )
if (( $ones%2==0 ))
then
	echo "$num is evil number"
else
	echo "$num is not an evil number"
fi

