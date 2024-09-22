#  What relationship is appropriate for Course and Faculty? 

'''
Association: The friendly handshake.
             A course knows about its faculty. '''

# example :

class faculty:
    def __init__(self, name):
        self.name = name
        
class course:
    def __init__(self,course_name,faculty):
        self.course_name = course_name
        self.faculty = faculty

faculty1 = faculty('Karan')
faculty2 = faculty('Yash')

course1 = course('Python',faculty1)
course2 = course('java',faculty2)

print(f'{course1.faculty.name} learning {course1.course_name}.')
print(f"{course2.faculty.name} learning {course2.course_name}.")