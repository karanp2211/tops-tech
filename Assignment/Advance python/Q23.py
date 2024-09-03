# Write a Python class named Rectangle constructed by a length and width and a method which will compute the area of a rectangle. 

class rectangle:
    def __init__(self,lenght,width):
        self.lenght = lenght
        self.width = width

    def compute_area(self):
            return self.lenght * self.width
    
Rectangle1 = rectangle(lenght=4,width=3)
area1 = Rectangle1.compute_area()
print('Area of rectangle = ',area1)