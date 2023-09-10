#Write a script to read employee details and save to emp.txt file.

read -p "Enter employee ID : " eid
read -p "Enter employee name : " ename
read -p "Enter employee salary : " esal

echo ""

echo "Employee name is $ename" >> emp.txt
echo "Employee ID is $eid" >> emp.txt
echo "Employee salary is $esal" >> emp.txt

cat emp.txt
