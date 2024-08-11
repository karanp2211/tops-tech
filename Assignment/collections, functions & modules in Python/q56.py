# How will you set the starting value in generating random numbers?

num = int(input("Enter number: "))

a = 10
b = 30
c = 111

num = (a * num + b) % c
random_num1 = num % 100

num = (a * num + b) % c
random_num2 = num % 100

print(random_num1)
print(random_num2)