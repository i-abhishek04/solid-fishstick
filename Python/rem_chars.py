def rem_chars(str, n):
    print("The string you entered is ",str)
    x = str[n:]
    return x

str = input("Enter the string : ")
n = int(input("Enter the number of chars you want to remove from starting: "))
if (n<=len(str)):
    print("The result is ", rem_chars(str, n))
else:
    print("you entered a number greater than the length of the string itself")