# Write a Python program to find the first appearance of the substring 
# 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the 
# whole 'not'...'poor' substring with 'good'. Return the resulting string. 

string = input("Enter a string: ")

if 'not' and 'poor' in string:
    not_str = string.index('not')
    poor_str = string.index('poor')
    if not_str < poor_str:
        string = string[:not_str] + 'good' + string[poor_str + 4:]
print(string)