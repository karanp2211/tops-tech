# Write a Python program to read a random line from a file. 

number =int(input("Enter number : "))
a = 42
b = 33
c = 111

file_path = 'example.txt'  # Replace with your file path
with open(file_path, 'r') as file:
    lines = file.readlines()

number = (a * number + b) % c
random_index = number % len(lines)

random_line = lines[random_index].strip()

print(f"Random line: {random_line}")