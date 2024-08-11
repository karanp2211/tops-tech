# Write a Python program to create a dictionary from a string. 
# Note: Track the count of the letters from the string. 

string = 'w3resource' 

string_count = {} 

for char in string:
    if char in string_count:
        string_count[char] += 1
    else:
        string_count[char] = 1    
print(string_count)