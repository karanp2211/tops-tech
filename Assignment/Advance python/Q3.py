#  Write a Python program to append text to a file and display the text.

with open("myfile.txt",'a') as file:
    file.write("Tops Technologies")

file_name = "myfile.txt"
with open(file_name,'r') as files:
    print(files.read())