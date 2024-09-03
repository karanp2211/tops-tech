#  Write a Python program to write a list to a file.

my_list = ['efr','ferf']

with open('example.txt','w') as file:
    file.writelines(my_list)