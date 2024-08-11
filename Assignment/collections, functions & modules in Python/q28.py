# Write a Python program to remove an empty tuple(s) from a list of tuples.

list_tuple = [(1,2,3),(4,5),()]

print(tuple(filter(None,list_tuple)))