allstudent = []
def add_student(studentid, student_name, age, grade, dob, subject):
    student = {
        "studentID": studentid,
        "student_Name": student_name,
        "Age": age,
        "Grade": grade,
        "DOB": dob,
        "Subject": subject,
    }
    allstudent.append(student)
    return f"student added sussesfully studentID={studentid},student name={student_name},age={age},grade={grade},DOB={dob},subject={subject}"


def display_students():
    if not allstudent:
        print("\nNo students to display.\n")
        return
    
    print("\nAll Students:")
    for student in allstudent:
        print(f"ID: {student['studentID']}, Name: {student['student_Name']}, Age: {student['Age']}, Grade: {student['Grade']}, DOB: {student['DOB']}, Subject: {student['Subject']}")
def update_student():
    student_id = int(input("Enter the Student ID to update: "))
    for student in allstudent:
        if student["ID"] == student_id:
            print("Leave blank to keep current value.")
            new_name = input(f"New name (current: {student['Name']}): ") or student["Name"]
            new_age = input(f"New age (current: {student['Age']}): ")
            new_grade = input(f"New grade (current: {student['Grade']}): ") or student["Grade"]
            new_dob = input(f"New DOB (current: {student['DOB']}): ") or student["DOB"]
            new_subject = input(f"New subject (current: {student['Subject']}): ") or student["Subject"]

            student["student_name"] = new_name
            student["Age"] = int(new_age) if new_age else student["Age"]
            student["Grade"] = new_grade
            student["DOB"] = new_dob
            student["Subject"] = new_subject

            print("Student updated successfully.\n")
            return
    print("Student ID not found.\n")
def delete_student():
    student_id = int(input("\nEnter the Student ID to delete: "))
    for student in allstudent:
        if student["ID"] == student_id:
            allstudent.remove(student)
            print("Student deleted successfully.\n")
            return
    print("Student ID not found.\n")
while True:
    print("welcome to the student data orginaizer!")
    print("select an option: ")
    print("1. add student")
    print("2. display all student")
    print("3. update student information")
    print("4. delete student")
    print("5. exit")
    option = int(input("select an option: "))
    match option:
     case 1:
        studentID = int(input("enter student id: "))
        studentname = input("enter student name: ")
        age = int(input("enter age: "))
        grade = input("enter grade: ")
        dob = input("DOB: ")
        subject = input("enter subject: ")
        result = add_student(studentID, studentname, age, grade, dob, subject)
        print(result)
     case  2:
        display_students()
     case 3:
        update_student()
     case 4:
        delete_student
     case 5:
        print("Thank the user for using student data orginaizar!")
        break

