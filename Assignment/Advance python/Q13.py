#  Explain Exception handling? What is an Error in Python?

'''Exceptions: An exception is an event that disrupts the normal flow of a program.
               It’s Python’s way of handling errors gracefully.
               Instead of crashing the entire program, Python allows you to catch and handle exceptions, which helps prevent abrupt terminations.'''


'''Errors in Python: An error in Python refers to a situation where the interpreter encounters something it cannot execute.
                     These errors can occur due to various reasons, such as syntax mistakes, logical issues, or unexpected conditions.'''

'''Here are some common types of exceptions in Python:
            
1) SyntaxError
2} NameError
3) TypeError
4) IndexErro
5) ValueError
6) ZeroDivisionError'''

# Example : 

try:
     result = 10 / 0  # ZeroDivisionError
except ZeroDivisionError:
    print("Oops! You tried to divide by zero.")