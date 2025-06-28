

#                       PR2 logic box

print("welcome to the pattern generater and number anyalizer!")
print("1. genrate a pattern ")
print("2. analyaz a range of number ")
print("3. exit ")
option = int(input("select an option: "))
if option == 1:
        print("genrate a pattern ")
        row = int(input("enter the number of row: "))
        for i in range(0, row):
            for j in range(1, i + 1):
                print("*", end=" ")
            print()
elif option == 2:
        print("analyaz a range of number ")
        start = int(input("enter the start of the range: "))
        end = int(input("enter the end of the range: "))
        for i in range(start, end):
            if i % 2 == 1:
                print("number", i, "is odd")
            else:
                print("number", i, "is even ")
        sum = 0
        for i in range(start, end):
            sum += i
        print("sum of all number form ", start, "to ", end, "is: ", sum)

elif option == 3:
        print("exiting the programe GOODBYE!")
else:
    print("invalid option plase select 1,2 and 3")
        
