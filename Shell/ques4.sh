#Write a script to read file name from end user and remove blank lines present in that file

read -p "Enter file name : " file
grep -v "^$" $file > test.txt
cat test.txt

