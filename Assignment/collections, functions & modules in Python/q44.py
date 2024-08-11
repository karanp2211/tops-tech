# Write a Python program to create and display all combinations of letters, 
# selecting each letter from a different key in a dictionary. 

data = {'1': ['a','b'], '2': ['c','d']} 

values = list(data.values())

for i in values[0]:
    for j in values[1]:
        print(i+j,end=' ')