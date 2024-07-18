# Write a python program to sum of the first n positive integers.

num = int(input("Enter a positive integer n: "))

if num > 0:
    total_sum = num * (num + 1) // 2
    print(f"Sum of the first {num} positive integers: {total_sum}")
else:
    print("Please enter a positive integer.")