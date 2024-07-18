#  Write a Python program to get the Factorial number of given number.

fact=1
num=int(input("Enter your number: "))

for i in range(1,num+1):
    print("The given number = ",num*fact)
    fact *= i