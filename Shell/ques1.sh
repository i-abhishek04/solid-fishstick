#Write a script to read student data and display to the terminal for confirmation.
#!/bin/bash

read -p "Enter student name : " name
read -p "Enter student roll no : " roll
read -p "Enter student marks : " marks

echo ""
echo "Student's name : $name"
echo "Student's roll no : $roll"
echo "Student's marks : $marks"

