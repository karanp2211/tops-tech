# Write a Python program to replace last value of tuples in a list.

Tuple_list = [(1,2,3),(4,5,6),(7,8,9)]

new_value = 100

Updated_list = [t[:-1] + (new_value,) for t in Tuple_list]
print(Updated_list) 