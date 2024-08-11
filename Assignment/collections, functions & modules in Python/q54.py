# How can you pick a random item from a range? 

start = 1
end = 10

number = int(input("Enter a number : "))

if start <= number <= end:
    print(f"This number range between {start} & {end} : ",number)
else:
    print("The number is out of range.")    