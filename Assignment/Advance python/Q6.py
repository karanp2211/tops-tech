#  Write a Python program to read a file line by line and store it into a list .
lines_list = []
with open('myfile.txt','r') as file:
     for line in file: 
        
        lines_list.append(line.strip())
print(lines_list)    