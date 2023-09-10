import pyautogui
import time

msg = input("Enter the message: ")
n = input("How many times ?: ")
wait = int(input("How much time would you require before placing the cursor at intended place(in sec)? "))
print("t minus")

count = wait
while(count != 0):
	print(count)
	time.sleep(1)
	count -= 1

print("Fire in the hole!!!")

for i in range(0,int(n)):
	pyautogui.typewrite(msg + '\n')