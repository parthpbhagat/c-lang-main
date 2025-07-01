

# student_details = {
#     name = (input(""))
# }

print("welcome to the student data recognizer!")
print("select an opretion: ")
print("1. add student")
print("2. display all student")
print("3. update student information")
print("4. delete")
print("5. display subject offered")
print("6. exit")
choice = int(input("enter your choice: "))
match (choice):
    case 1:
        print("enter student details: ")
        studentID = int(input("student ID: "))
        studentname = input("student name: ")
        age = int(input("age: "))
        grade = input("grade:")
        DOB = (input("date of barth(YYYY-MM-DD): "))
        subject = input("subject: ")
    case 2:

        print("----------------display all student--------------------\n")
        print("student id: ",studentID,"student name: ",studentname,"age: ",age)


# student = {
#     studentID = int(input("student id: "))


# }
