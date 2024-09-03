#  When will the else part of try-except-else be executed?

""" => The try block contains risky code.
    => If an exception occurs, the except block handles it.
    => If no exception occurs, the else block executes.

Think of it as a code adventure: try explores the cave, except deals with monsters, and else finds the treasure"""

# Example : 

try:
    String = input("Enter an integer: ")
    number = int(String)
    square = number ** 2
except ValueError:
    print("Oops! That's not a valid integer.")
else:
    print(f"The square of {number} is {square}.")