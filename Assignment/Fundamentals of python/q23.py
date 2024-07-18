# Write a Python function to insert a string in the middle of a string.

string = input("Enter a string: ")
middle_string = len(string) // 3

result = string[:middle_string] + "good " + string[middle_string:]

print(result)