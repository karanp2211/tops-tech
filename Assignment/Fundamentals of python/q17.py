# Write a Python program to get a single string from two given strings, separated by a space and swap
# the first two characters of each string. 

string1 = input("Enter string1 : ")
string2 = input("Enter string2 : ")

str1_swap = string1[:2] + string2[2:]
str2_swap = string2[:2] + string1[2:]

result = str1_swap + " " + str2_swap
print(result)