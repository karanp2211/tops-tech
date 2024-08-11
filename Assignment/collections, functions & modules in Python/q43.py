# Why Do You Use the Zip () Method in Python? 


# => The zip() function in python is used to combine multiple iterables(like lists or tuples) into a single iterable of tuples.
# => It pairs elements from each iterable based on their position.

# Example : combining list

list1 = [1,2,3,4,5]
list2 = [6,7,8,9,10]

print(list(zip(list1,list2)))