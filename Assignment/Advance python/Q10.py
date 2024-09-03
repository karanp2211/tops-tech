# Write a Python program to count the frequency of words in a file.

from collections import Counter

with open('myfile.txt','r') as file:
    words = file.read().split()

    count_word = Counter(words)
print(count_word)    