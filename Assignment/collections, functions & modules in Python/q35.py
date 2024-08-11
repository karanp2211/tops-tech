# How Do You Traverse Through A Dictionary Object In Python?

dict = {"Name":"Karan","age":22,"city":"surat","roll no":15}

# for key in dict:
#     print(key)

# for value in dict.values():
#     print(value)

for key,value in dict.items():
    print(f"{key}:{value}")