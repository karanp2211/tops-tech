# Quiz Game: A Python program demonstrating CRUD operations for a quiz system.

quiz_data = {}

print("WELCOME TO TOPS QUIZ GAMING CHALLENGE")

role = input("Select your role: \n-> Quiz Master (press 1)\n-> Quiz Cracker (press 2)\n")
if role == "1":
   role = "Quiz Master"
elif role == "2":
   role = "Quiz Cracker"
else:
    print("Invalid input. Please enter 1 or 2.")


def add_question():
    """Add a new question to the quiz."""
    question = input("Enter the question: ")
    answer = input("Enter the answer: ")
    quiz_data[question] = answer
    print("Question added successfully!")


def display_questions():
    """Display all questions in the quiz."""
    if not quiz_data:
        print("No questions available.")
    else:
        print("Quiz Questions:")
        for question, answer in quiz_data.items():
            print(f"Q: {question}\nA: {answer}\n")


def update_question():
    """Update an existing question."""
    question = input("Enter the question you want to update: ")
    if question in quiz_data:
        new_answer = input("Enter the new answer: ")
        quiz_data[question] = new_answer
        print("Question updated successfully!")
    else:
        print("Question not found.")


def delete_question():
    """Delete a question from the quiz."""
    question = input("Enter the question you want to delete: ")
    if question in quiz_data:
        del quiz_data[question]
        print("Question deleted successfully!")
    else:
        print("Question not found.")


while True:
    print("\n    Menu    :")
    print("1. Add a question")
    print("2. Display questions")
    print("3. Update a question")
    print("4. Delete a question")
    print("5. Exit")
    choice = input("Enter your choice (1-5): ")


    if choice == "1":
        add_question()
    elif choice == "2":
        display_questions()
    elif choice == "3":
        update_question()
    elif choice == "4":
        delete_question()
    elif choice == "5":
        print("Exiting the quiz system. Have a great day!")
        break
    else:
        print("Invalid choice. Please select a valid option.")