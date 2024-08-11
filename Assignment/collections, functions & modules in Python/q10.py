# Write a Python program to generate and print a list of first and last 5 elements where
# the values are square of numbers between 1 and 30. 

numbers = list(range(1, 31))
squares = [num ** 2 for num in numbers]

print("First 5 elements:",squares[:5])
print("Last 5 elements:",squares[-5:])