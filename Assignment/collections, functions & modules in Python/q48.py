# Write a Python function to calculate the factorial of a number (a nonnegative integer).

def fact(n):
    
    result = 1
    for i in range(1,n + 1):
        result *= i
    return result
    
number = int(input("Enter a number: "))
# factorial = fact(number)
print(f"{number} = {fact(number)}") 