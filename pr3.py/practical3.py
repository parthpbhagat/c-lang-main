

# print("welcome to the student data recognizer!")
# print("select an opretion: ")
# print("1. add student")
# print("2. display all student")
# print("3. update student information")
# print("4. delete")
# print("5. display subject offered")
# print("6. exit")
# option = int(input("select an option: "))
# if option == 1:
#       print("add student: ")
#       print("enter student details: ")
#       studentID = int(input("student ID: "))
#       studentname = input("student name: ")
#       age = int(input("age: "))
#       grade = input("grade:")
#       DOB = (input("date of barth(YYYY-MM-DD): "))
#       subject = input("subject: ")


   
# elif option == 2:
#      print("display all student: ")
#      print("")

      

# # elif option == 3:
# #         print("exiting the programe GOODBYE!")
# else:
#     print("invalid option plase select 1,2 and 3")





# # Initialize empty list to store student records
# students = []

# def add_student():
#     print("\nAdd Student:")
#     studentID = int(input("Student ID: "))
#     studentname = input("Student Name: ")
#     age = int(input("Age: "))
#     grade = input("Grade: ")
#     DOB = input("Date of Birth (YYYY-MM-DD): ")
#     subject = input("Subject: ")

#     student = {
#         "ID": studentID,
#         "Name": studentname,
#         "Age": age,
#         "Grade": grade,
#         "DOB": DOB,
#         "Subject": subject
#     }

#     students.append(student)
#     print("Student added successfully!\n")

# def display_students():
#     if not students:
#         print("\nNo students to display.\n")
#         return
    
#     print("\nAll Students:")
#     for student in students:
#         print(f"ID: {student['ID']}, Name: {student['Name']}, Age: {student['Age']}, Grade: {student['Grade']}, DOB: {student['DOB']}, Subject: {student['Subject']}")

# def update_student():
#     student_id = int(input("\nEnter the Student ID to update: "))
#     for student in students:
#         if student["ID"] == student_id:
#             print("Leave blank to keep current value.")
#             new_name = input(f"New name (current: {student['Name']}): ") or student["Name"]
#             new_age = input(f"New age (current: {student['Age']}): ")
#             new_grade = input(f"New grade (current: {student['Grade']}): ") or student["Grade"]
#             new_dob = input(f"New DOB (current: {student['DOB']}): ") or student["DOB"]
#             new_subject = input(f"New subject (current: {student['Subject']}): ") or student["Subject"]

#             student["Name"] = new_name
#             student["Age"] = int(new_age) if new_age else student["Age"]
#             student["Grade"] = new_grade
#             student["DOB"] = new_dob
#             student["Subject"] = new_subject

#             print("Student updated successfully.\n")
#             return
#     print("Student ID not found.\n")

# def delete_student():
#     student_id = int(input("\nEnter the Student ID to delete: "))
#     for student in students:
#         if student["ID"] == student_id:
#             students.remove(student)
#             print("Student deleted successfully.\n")
#             return
#     print("Student ID not found.\n")

# def display_subjects():
#     subject_set = set(student["Subject"] for student in students)
#     print("\nSubjects Offered:")
#     for subject in subject_set:
#         print(f"- {subject}")

# # Main loop
# while True:
#     print("\nWelcome to the Student Data Recognizer!")
#     print("Select an operation:")
#     print("1. Add student")
#     print("2. Display all students")
#     print("3. Update student information")
#     print("4. Delete student")
#     print("5. Display subjects offered")
#     print("6. Exit")

#     try:
#         option = int(input("Select an option (1-6): "))
#     except ValueError:
#         print("Please enter a valid number.")
#         continue

#     if option == 1:
#         add_student()
#     elif option == 2:
#         display_students()
#     elif option == 3:
#         update_student()
#     elif option == 4:
#         delete_student()
#     elif option == 5:
#         display_subjects()
#     elif option == 6:
#         print("Exiting the program. Goodbye!")
#         break
#     else:
#         print("Invalid option. Please select a number from 1 to 6.")

def add_student():
    print("\nAdd Student:")
    studentID = int(input("Student ID: "))
    studentname = input("Student Name: ")
    age = int(input("Age: "))
    grade = input("Grade: ")
    DOB = input("Date of Birth (YYYY-MM-DD): ")
    subject = input("Subject: ")

    student = {
        "ID": studentID,
        "Name": studentname,
        "Age": age,
        "Grade": grade,
        "DOB": DOB,
        "Subject": subject
    }

    students.append(student)
    print("Student added successfully!\n") 
def display_students():
    if not students:
        print("\nNo students to display.\n")
        return
    
    print("\nAll Students:")
    for student in students:
        print(f"ID: {student['ID']}, Name: {student['Name']}, Age: {student['Age']}, Grade: {student['Grade']}, DOB: {student['DOB']}, Subject: {student['Subject']}")
def update_student():
    student_id = int(input("\nEnter the Student ID to update: "))
    for student in students:
        if student["ID"] == student_id:
            print("Leave blank to keep current value.")
            new_name = input(f"New name (current: {student['Name']}): ") or student["Name"]
            new_age = input(f"New age (current: {student['Age']}): ")
            new_grade = input(f"New grade (current: {student['Grade']}): ") or student["Grade"]
            new_dob = input(f"New DOB (current: {student['DOB']}): ") or student["DOB"]
            new_subject = input(f"New subject (current: {student['Subject']}): ") or student["Subject"]

            student["Name"] = new_name
            student["Age"] = int(new_age) if new_age else student["Age"]
            student["Grade"] = new_grade
            student["DOB"] = new_dob
            student["Subject"] = new_subject

            print("Student updated successfully.\n")
            return
    print("Student ID not found.\n")
def delete_student():
    student_id = int(input("\nEnter the Student ID to delete: "))
    for student in students:
        if student["ID"] == student_id:
            students.remove(student)
            print("Student deleted successfully.\n")
            return
    print("Student ID not found.\n")
def display_subjects():
    subject_set = set(student["Subject"] for student in students)
    print("\nSubjects Offered:")
    for subject in subject_set:
        print(f"- {subject}")
# Initialize empty list to store student records
# 
students = []
# Main loop
while True:
    print("\nWelcome to the Student Data Recognizer!")
    print("Select an operation:")
    print("1. Add student")
    print("2. Display all students")
    print("3. Update student information")
    print("4. Delete student")
    print("5. Display subjects offered")
    print("6. Exit")

    try:
        option = int(input("Select an option (1-6): "))
    except ValueError:
        print("Please enter a valid number.")
        continue

    if option == 1:
        add_student()
    elif option == 2:
        display_students()
    elif option == 3:
        update_student()
    elif option == 4:
        delete_student()
    elif option == 5:
        display_subjects()
    elif option == 6:
        print("Exiting the program. Goodbye!")
        break
    else:
        print("Invalid option. Please select a number from 1 to 6.")

