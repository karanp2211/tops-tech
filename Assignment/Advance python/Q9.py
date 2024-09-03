#  Write a Python program to count the number of lines in a text file.

with open('myfile.txt','r') as file:
    count_line = len(file.readlines())
print(count_line)    