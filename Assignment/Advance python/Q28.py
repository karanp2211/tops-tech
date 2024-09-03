#  What is used to check whether an object o is an instance of class A? 

class A:
    pass

my_object = A()

if type(my_object) is A:
    print("Yes, my_object is an instance of class A!")
else:
    print("No, my_object is not an instance of class A.")