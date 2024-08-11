# Write a Python program to find the highest 3 values in a dictionary.

dict = {1:1,2:4,5:25,6:36,8:64,9:81}

highest_value = sorted(dict.values())[3:]

highest_value.reverse()
print(highest_value)