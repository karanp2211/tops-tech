#  Write a Python program to read an entire text file.

with open("myfile.txt", "w") as file:
    file.write("Karan Panchal\n")

file = "myfile.txt"
with open(file,'r') as files:
    print(files.read())