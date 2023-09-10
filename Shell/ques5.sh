#Write a script to read file name from end user and remove duplicate lines present in that file

read -p "Enter file name : " file
sort -u $file
