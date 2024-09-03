#  Write a Python program to read last n lines of a file.

n=5
file_name = "myfile.txt"

with open(file_name,'r') as file:
    lines = file.readline() [-n:]
    
for line in lines:
    print(line.strip())    