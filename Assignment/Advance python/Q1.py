#  What is File function in python? What is keywords to create and write file. 



"""=> the file function itself doesn’t exist. However, you can work with files using built-in functions and keywords. """

"""1. Creating a File: To create a new file, you’ll want to use the open() function.
                       It allows you to open a file in different modes."""

# Example :  

with open("my_file.txt", "w") as file:
    file.write("Hello, world!\n")
    file.write("This is my first Python file.\n")

""" Writing to a File: Once you’ve opened a file for writing, you can use the write() method to add content to it.
                       Each call to write() appends data to the file. 
                       Don’t forget to include newline characters (\n) if you want to separate lines."""

""" Closing the File: It’s essential to close the file after you’re done writing to it.
                   The with statement automatically handles this for you."""

""" Reading from a File: To read from an existing file, you can open it in read mode ("r")"""    

# Example : 
# Read from an existing file
file = "my_file.txt"
with open(file,'r') as files:
    print(files.read())