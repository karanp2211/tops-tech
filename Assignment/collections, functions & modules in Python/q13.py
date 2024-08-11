# Write a Python program to select an item randomly from a list. 

# list1 = ['apple', 'banana', 'cherry', 'date', 'elderberry']
# my_list = len(list1) // 4
# random_list = list1[my_list]
# print(random_list)

import random
items = ['apple', 'banana', 'cherry']

random_item = random.choice(items)

print(f"The randomly selected item is: {random_item}")