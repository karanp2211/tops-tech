# Write a Python function that takes a list and returns a new list with unique elements of the first list. 

def mylist(input_list):
    return list(set(input_list))

unique_list = [1, 2, 2, 3, 4, 4, 5, 5, 5]
print(mylist(unique_list))