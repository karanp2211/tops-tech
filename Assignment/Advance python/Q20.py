#  Write python program that user to enter only odd numbers, else will raise an exception.

num = int(input("Enter a number: "))

if num %2 == 0:
    raise ValueError("This is even number.")

print(f"Yes,{num} is an odd number.")