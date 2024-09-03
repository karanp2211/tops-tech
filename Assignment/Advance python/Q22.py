#  How to Define a Class in Python? What Is Self? Give An Example Of A Python Class

'''
How to Define a Class in Python: 

1) Use the class keyword.
2) Follow it with the class name (usually capitalized).
3) Add a colon (:) to indicate the start of the class body.
4) Inside the class body, you can define attributes and methods.  '''

# Example : 

class my_self:
    def __init__(self, name):
        self.name = name

my_dog = my_self(name="Karan")

print(f"My name is {my_dog.name}.")

'''
Understanding self:

=> self refers to the current instance of the class.
=> It allows you to access instance variables (attributes) and call instance methods.
=> By convention, the first parameter of any method in a class is named self.   '''