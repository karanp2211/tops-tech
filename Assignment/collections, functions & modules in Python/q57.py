# How will you randomizes the items of a list in place?

number = int(input("Enter number: "))

a = 10
b = 30
c = 111

my_list = [1,2,3,4,5,6,7,8,9,10]
n = len(my_list)

for i in range(n-1,0,-1):
    number = (a * number + b) % c
    j = number % (i + 1)
    my_list[i], my_list[j] = my_list[j], my_list[i]

print(my_list)