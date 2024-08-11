# Write a Python program to unzip a list of tuples into individual lists.

Tuple_list = [(1,'A'),(2,'B'),(3,'C'),(4,'D')]

number,char = zip(*Tuple_list)
print("Number of list : ",list(number))
print("Character of list : ",list(char))