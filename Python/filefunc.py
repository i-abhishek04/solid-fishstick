import os
# os.rmdir('newdir')

file = open('hello1.txt','w')
file.write("hello everyone\n")
file.close()
with open('hello1.txt','r') as f:
    content = f.read()
    print(content)
# os.mkdir('newdir')
# print(os.getcwd())
# print(os.listdir())
# os.rmdir('newdir')
# print(os.listdir())