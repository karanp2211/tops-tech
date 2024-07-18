# Write a Python function that takes a list of words and returns the length of the longest one.

list = ['virat','dhoni','rohit','sachin','bumrah']
lenght = 0

for words in list:
    if len(words) > lenght:
        lenght = len(words)
print(lenght)        