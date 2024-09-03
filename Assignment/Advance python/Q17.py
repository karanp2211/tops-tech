# When is the finally block executed? 


"""The finally block in Python always executes, whether there was an exception or not.
   It’s like the janitor who cleans up after both success and chaos."""

# Example :

def divide(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        print("Oops! You tried to divide by zero.")
    finally:
        print("Cleaning up...")

divide(10, 2)  # No exception
divide(10, 0)  # ZeroDivisionError