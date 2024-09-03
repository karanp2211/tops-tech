#  Can one block of except statements handle multiple exception?

'''You can catch multiple exceptions within a single except block in Python.
   It’s like having a versatile safety net that can handle various circus tricks.'''

# Example :

try:
    result = 10 / 0  
except (ZeroDivisionError, ValueError, IndexError) as e:
    print(f"An error occurred: {e}")

"""The except block catches three types of exceptions: ZeroDivisionError, ValueError, and IndexError.
   If any of these exceptions occur, the block executes and prints an error message."""    