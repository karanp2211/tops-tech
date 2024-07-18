# Write a Python program to count occurrences of a substring in a string.

string1 = input("Enter a string1: ")
string2 = input("Enter a string2: ")

count = 0

for i in range(len(string1)):
    if string1[i:i + len(string2)] == string2:
        count += 1
print(f"Occurrences of '{string2}' in the string1: {count}")