# Write a Python program to check multiple keys exists in a dictionary.

dict = {"Name":"Karan","age":22,"city":"surat","roll no":15}

dict1 = ["name","city","dept"]

key = all(dict)
for keys in dict1:
    if keys not in dict:
        key = False
print(f"All exists keys is {key}.")