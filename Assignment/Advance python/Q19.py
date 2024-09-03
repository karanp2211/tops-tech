#  How Do You Handle Exceptions With Try/Except/Finally In Python? Explain with coding snippets.

''' 1) try and except Blocks: 

=> The try block contains code that might raise an exception.
=> If an exception occurs, Python jumps to the corresponding except block.
=> You can catch specific exceptions or a general Exception'''

# Example :

try:
    result = 10 / 0  
except (ZeroDivisionError, ValueError, IndexError) as e:
    print(f"An error occurred: {e}")


''' 2) finally Block:

=> The finally block always executes, regardless of exceptions.
=> Use it for cleanup tasks (e.g., closing files, releasing resources).'''    

# Example :

def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        print("Oops! You tried to divide by zero.")
    finally:
        print("Cleaning up...")

divide(10, 2)  # No exception
divide(10, 0)