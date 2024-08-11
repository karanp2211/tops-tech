# How can you pick a random item from a list or tuple?

list = [1,4,9,16,25,36,49,64]

list1 = len(list) % int(input("enter number:")) # len(list) = 8 % 3 = 2 , it means my index number is 2. answer is 9.

random = list[list1]
print(random)

# for tuple
tuple = (1,4,9,16,25,36,49,64)

tupple1 = len(tuple) % int(input("enter number:"))

random1 = tuple[tupple1]
print(random1)