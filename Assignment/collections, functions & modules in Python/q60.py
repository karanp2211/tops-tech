# Write a Python program to calculate the area of a trapezoid 

# Area = (1/2) * (base1 + base2) * height

base1 = float(input("Enter first base: "))
base2 = float(input("Enter second base: "))
height = float(input("Enter the height: "))

area = 0.5 * (base1 + base2) * height

print(f"The area of the trapezoid is {area}")