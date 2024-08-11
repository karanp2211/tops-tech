# Write a Python program to find the repeated items of a tuple. 

Tuple = (1,2,3,4,4,5,6,7,7,8,9)

counts = set()

for i in Tuple:
    if Tuple.count(i) > 1:
        counts.add(i)

print(list(counts))