#  Write a Python class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle 

class circle:
    def __init__(self,radius):
        self.radius = radius
        self.pi = 3.14

    def area(self):
        return 3.14 * self.radius ** 2
    
    def perimeter(self):
        return 2 * 3.14 * self.radius
    
Circle = circle(3)
print('Area = ',Circle.area())
print('Perimeter = ',Circle.perimeter())