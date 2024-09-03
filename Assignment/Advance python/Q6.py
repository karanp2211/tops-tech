#  Write a Python program to read a file line by line and store it into a list .

with open('myfile.txt','r') as file:
    lines = [line.strip() for line in file]
print(lines)    