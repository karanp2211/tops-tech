#  Explain Inheritance in Python with an example? What is init? Or What Is A Constructor In Python? 

'''
Inheritance in Python :

=> Inheritance allows you to create a new class (called a subclass or derived class) based on an existing class (called a parent class or base class).
=> The subclass inherits attributes and methods from the parent class.
=> This concept promotes code reuse and establishes a hierarchical relationship between classes.'''

# Example : 

class child:
    def __init__(self, name):
        self.name = name

    def speak(self):
        print(f"{self.name} a beautiful child.")

class parents(child):
    def speak(self):
        print(f"{self.name} has beautiful child.")

my_child = child(name="This is")
my_parents = parents(name="This parents")

my_child.speak()  
my_parents.speak()    


'''
init :
Animal is the parent class with an __init__ method (constructor) that initializes the name attribute. '''


'''
Constructor : A constructor is a special method that is automatically called when an object of a class is created.

=> In Python, the constructor method is named __init__.
=> It initializes instance variables (attributes) for the object.
=> You can customize the constructor to set initial values or perform other setup tasks.'''