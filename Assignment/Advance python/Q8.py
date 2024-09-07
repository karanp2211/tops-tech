# Write a python program to find the longest words. 

words = 'my name is karan panchal'

Text = words.split()
longest_word = []
lenght = 0

for word in Text:
        word_lenght = len(word)
        if word_lenght > lenght:
                longest_word = [word]

                lenght = word_lenght

        elif lenght == word_lenght:
                longest_word.append(word)

print(longest_word)                