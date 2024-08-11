# Write a Python script to sort (ascending and descending) a dictionary by value.

Dict = {'a':1,'b':4,'c':9,'d':25,'e':16,'f':81,'g':49}

dict1 = sorted(Dict.values())
print("Ascending order : ",dict1)

dict1.reverse()
print("Desending order : ",dict1)