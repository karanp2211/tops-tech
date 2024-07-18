# Write python program that swap two number with temp variable and without temp variable.

# without using temp variable
num1= 10
num2= 20

print(f"Before swaping : num1 = {num1} & num2 = {num2}")

num1 = num1 + num2
num2 = num1 - num2
num1 = num1 - num2

print(f"After swaping : num1 = {num1} & num2 = {num2}")


# using temp variable
num1= 10
num2= 20

print(f"Before swaping : num1 = {num1} & num2 = {num2}")

temp = num1
num1 = num2
num2 = temp

print(f"After swaping : num1 = {num1} & num2 = {num2}")