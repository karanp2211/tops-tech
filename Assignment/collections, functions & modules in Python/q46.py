# Write a Python program to combine values in python list of dictionaries. 

data = [{'item':'item1','amount': 400},{'item': 'item2', 'amount': 300},{'item': 'item1', 'amount': 750}] 

combine_values = {}

for values in data:
    item = values['item']
    amount = values['amount']
    if item in combine_values:
        combine_values[item] += amount
    else:
        combine_values[item] = amount
print(combine_values)          