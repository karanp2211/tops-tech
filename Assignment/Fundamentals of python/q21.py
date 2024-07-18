# Write a Python function to reverses a string if its length is a multiple of 4. 

string = input("Enter a string: ")

if len(string) %5 == 0:
    string = string[::3]
print(string)    