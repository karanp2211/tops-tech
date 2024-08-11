# Write a Python function that checks whether a passed string is palindrome or not.

def palindrome(str):
    return str == str[::-1]

str = "wow"
Ans = palindrome(str)

if Ans:
    print(f"{str} is palindrome.")
else:
    print(f"{str} is not palindrome.")