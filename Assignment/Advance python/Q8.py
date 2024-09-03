# Write a python program to find the longest words. 

words = 'my name is karan panchal'

longest_word = max(words.split(),key=len)
print(longest_word)