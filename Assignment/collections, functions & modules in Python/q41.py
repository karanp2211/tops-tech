# Write a Python program to combine two dictionary adding values for common keys. 

d1 = {'a': 100, 'b': 200, 'c':300} 
d2 = {'a': 300, 'b': 200,'d':400} 

combine_dict = d1.copy()

for key,values in d2.items():
    if key in combine_dict:
        combine_dict[key] += values
    else:
        combine_dict[key] = values    
print(combine_dict)        