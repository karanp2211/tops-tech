# Write a Python program to copy the contents of a file to another file. 

with open('myfile.txt','r') as fst:
    content = fst.read()

with open('example.txt','w') as snd:
    snd.write(content)    