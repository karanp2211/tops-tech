# Write a Python function to check whether a number is in a given range.

def range(number,star,end):
    return number,star,end

number = 20
start = 15
end = 30

if range(number,start,end):
    print(f"The {number} is in range of ({start},{end}). ")
else:
    print(f"The {number} is not in range of ({start},{end}). ")    