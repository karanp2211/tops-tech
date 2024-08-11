# Write a Python program to check whether a list contains a sub list.

list1 = [1,2,3,4,5,6]
list2 = [2,4,6]

for list3 in list2:
    if list3 in list1:
        print(True)
        break