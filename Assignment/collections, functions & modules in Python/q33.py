# Write a Python script to concatenate following dictionaries to create a new one. 

dict1 = {1:'A',2:'B',3:'C',4:'D'}
dict2 = {5:'E',6:'F',7:'G',8:'H'}

concat_dict = {**dict1,**dict2}

print(concat_dict)