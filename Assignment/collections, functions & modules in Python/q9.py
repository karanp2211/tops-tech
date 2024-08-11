# Write a Python function that takes two lists and returns true if they have at least one common member. 

def mylist(list1,list2):
    for item in list1,list2:
        return True
    
list1 = [1,2,3,4,5]    
list2 = [6,5,7,8,3]

print(mylist(list1,list2))