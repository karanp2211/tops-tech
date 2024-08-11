# Write a Python program to find the maximum and minimum numbers from the specified decimal numbers.

numbers = [float(x) for x in input("Enter decimal number : ").split()]

max_number = max(numbers)
min_number = min(numbers)

print(f"The maximum number is {max_number}")
print(f"The minimum number is {min_number}")