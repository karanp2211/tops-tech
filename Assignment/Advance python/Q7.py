#  Write a Python program to read a file line by line store it into a variable. 

with open('myfile.txt','r') as file:
    variable = file.read()
print(variable)    