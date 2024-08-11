# Write a Python program to calculate surface volume and area of a cylinder 

# volume = pi * radius^2 * height
# surface area = 2*pi * radius * (radius + height)

radius = float(input("Enter radius : "))
height = float(input("Enter height : "))

pi = 3.14
volume = pi * radius**2 * height

surface_area = 2 * pi * radius * (radius + height)

print(f"The volume of the cylinder is {volume}")
print(f"The surface area of the cylinder is {surface_area}")