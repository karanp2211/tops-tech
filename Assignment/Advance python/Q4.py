#  Write a Python program to read first n lines of a file.
n=5
file_name = "myfile.txt"

with open(file_name,'r') as files:
    lines = files.readline() [:n]

for line in lines:
    print(lines.strip())