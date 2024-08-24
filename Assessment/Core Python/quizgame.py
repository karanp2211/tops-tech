# Quiz Game: A Python program demonstrating CRUD operations for a quiz system.

import os
import sys

class QuizMaster:
    def __init__(self):
        self.questions = {}

    def add_question(self):
        while True:
            question_text = input("Enter a new question: ")
            if question_text:
                break
            else:
                print("Question cannot be empty. Please try again.")
        while True:
            answer = input("Enter the answer to the question: ")
            if answer:
                break
            else:
                print("Answer cannot be empty. Please try again.")
        self.questions[question_text] = answer
        print("Question added successfully!")

    def view_questions(self):
        if self.questions:
            for i, (question, answer) in enumerate(self.questions.items()):
                print(f"{i+1}. Question: {question}")
                print(f"   Answer: {answer}")
        else:
            print("No questions available yet!")

    def delete_question(self):
        if self.questions:
            self.view_questions()
            while True:
                try:
                    question_number = int(input("Enter the number of the question to delete: "))
                    if 1 <= question_number <= len(self.questions):
                        deleted_question = list(self.questions.keys())[question_number - 1]
                        del self.questions[deleted_question]
                        print("Question deleted successfully!")
                        break
                    else:
                        print("Invalid question number. Please enter a valid number.")
                except ValueError:
                    print("Invalid input. Please enter a number.")
        else:
            print("No questions available to delete!")

quiz_master = QuizMaster()


def display_menu(role):
    if role == "Quiz Master":
        print("WELCOME MASTER\nSHAKE YOUR BRAIN AND ADD SOME CHALLENGING QUESTIONS..")
        print("\nMENU")
        print("Press 1 for add questions")
        print("Press 2 for view questions")
        print("Press 3 for delete questions")
        print("Press 4 for exit")
    else:
        print("WELCOME QUIZ CRACKER\nGET READY TO TEST YOUR KNOWLEDGE.")
        print("\nPress 1 for start quiz")
        print("Press 2 for exit")

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

# Main Program Execution

if __name__ == "__main__":
    clear_screen()

    print("WELCOME TO TOPS QUIZ GAMING CHALLENGE")
    while True:
        role = input("Select your role: \n-> Quiz Master (press 1)\n-> Quiz Cracker (press 2)\n")
        if role == "1":
            role = "Quiz Master"
            break
        elif role == "2":
            role = "Quiz Cracker"
            break
        else:
            print("Invalid input. Please enter 1 or 2.")

    while True:
        clear_screen()
        display_menu(role)
        choice = input("Which operation would you like to perform? ")

        if role == "Quiz Master":
            if choice == "1":
                quiz_master.add_question()
            elif choice == "2":
                quiz_master.view_questions()
            elif choice == "3":
                quiz_master.delete_question()
            elif choice == "4":
                print("Exiting the quiz game. Goodbye!")
                sys.exit()
            else:
                print("Invalid input. Please enter a number from 1 to 4.")
        else:
            if choice == "1":
                print("Starting the quiz! (Coming soon)")
                
            elif choice == "2":
                print("Exiting the quiz game. Goodbye!")
                sys.exit()
            else:
                print("Invalid input. Please enter 1 or 2.")

        input("\nPress Enter to continue...") # Pause for user input