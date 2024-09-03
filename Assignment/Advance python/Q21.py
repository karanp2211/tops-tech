# What are oops concepts? Is multiple inheritance supported in java 

"""OOP is a powerful paradigm that allows us to model real-world entities and their interactions in our code."""

# OOP concepts:

''' 1) Class and Object:
                    
=> A class is a blueprint or template for creating objects. 
=> An object is an instance of a class.
= It represents a real-world entity and encapsulates both data (attributes) and methods.

2) Encapsulation:

=> Encapsulation refers to bundling data (attributes) and methods (functions) that operate
   on that data into a single unit (i.e., a class).
   
3) Abstraction:

=> Abstraction involves showing only essential information to the outside world while hiding implementation details.

4) Inheritance:

=> Inheritance allows a class (called a subclass or derived class) to inherit properties and behaviors from another
   class (called a superclass or base class).   
   
5) Polymorphism:

=> Polymorphism means that objects of different classes can be treated uniformly through a common interface.   '''

# Is multiple inheritance supported in java 

'''Multiple Inheritance in Java: 

=> Java does not directly support multiple inheritance for classes.
=> Instead, it provides an alternative through interfaces.'''

# Example : 

# class A {
#     void check() {
#         System.out.println("Method foo() in class A");
#     }
# }

# class B extends A {
#     void check() {
#         System.out.println("Method foo() in class B");
#     }
# }

# class C extends A {
#     void check() {
#         System.out.println("Method foo() in class C");
#     }
# }

# class D extends B {
#     // Inherits foo() from class B
# }

# public class Main {
#     public static void main(String[] args) {
#         D d = new D();
#         d.check(); // Output: Method foo() in class B
#     }
# }