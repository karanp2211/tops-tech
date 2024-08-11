# Write a Python program to print all unique values in a dictionary.

dict = {'a':1,'b':2,'c':3,'d':1,'e':3,'f':4}

unique_value = set(dict.values())

print(f"Unique values are : {unique_value}")