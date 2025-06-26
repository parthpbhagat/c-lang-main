

# list = [1,2,3,4,5,6,7]
# list.insert(7,8)
# print(list)



# information = {
#     "name":"parth bhagat",
#     "age":27,
#     "mo no":9011494385,
#     "address":"ahemdabad"
# }
# print(information)


# frist_name = input("enter your name:")
# last_name = input("enter your last name:")
# print("hello",last_name,frist_name)


                #   cafe orderd menu
# menu = {
#     "pizza":100,
#     "sandwich":50,
#     "pasta":60,
#     "coffi":40,
#     "cold coffi":100
# }
# print("----------welcome to our cafe------------")
# print(" 1.pizza:         100\n 2.sandwich:         50\n 3.pasta:      60\n 4.coffi:       40\n 5.cold coffi:        100")

# order_total = 0
# item1 = input("enter name of order")
# if item1 in menu:
#     order_total+= menu[item1]
#     print(f"your iteam {item1} has been added")

# else:
#     print(f"your iteam {item1} not avalable")
# anather_order = input("do you want to add anather order? (yes/no)")
# if anather_order == "yes":
#         item2 = input("enter the name of secound iteam =")
# if item2 in menu:
#  order_total+=menu [item2]
#  print(f"iteam2 {item2} has been added")
# else:
#  print(f"your item {item2} not avalable")
# print(f"plase total amount to you pay {order_total} rs ")



# print my name 10 time

# name = input("enter your name :")
# x = 1
# while x <=10:
#     print(x)
#     x = x + 1



#       multiplaction table using loop
# num =int(input("enter the num:"))
# x = 1
# while x <=10:
#     print(f"{num}*{x}={num*x}")
#     x = x + 1




#     #   nested for loop 
# x = 1
# for x in range (1,5):
#  for j in range (1,5):
#     print("*",end=" ")
#  print()



# #  print this pattern
# """
# *
# **
# ***
# ****
# *****
# """
# r = 5
# for x in range (r,0,-1):
#  for j in range (x):
#     print("*",end=" ")
#  print()




# r = 5
# for x in range (1,r+1):
#  for j in range (1,x+1):
#     print("*",end=" ")
#  print()



# r = 6
# for x in range(1,r):
#    for j in range(1, x + 1):
#       print(j ,end=" ")
#    print()






# name = {"parth","prafful","chetan"}
# print(name)





# num = int(input("enter your number:"))
# x = 1
# while x <= 10:
#   print(f"{num}*{x}={num*x}")
#   x = x + 1
   




# num = int(input("enter any number:"))
# i = 1
# while i <= 10:
#   print(f"{num}*{i}={num*i}")
#   i = i + 1



# list = [1,2,3,4,5,6,8,9]
# list.insert(6,7)
# list.insert(9,10)
# del list[5]  #del index no 5
# list.index(5)
# print(list)



# base_sallary = int(input("enter your sallary :"))
# HRA = int(input("enter HRA parcent: "))
# DA = int(input("enter da parcent: "))
# TA = int(input("enter ta parcent: "))

# gross_sallary = base_sallary+HRA+DA+TA

# print(gross_sallary)


# total_secound = int(input("enter time in secound  "))

# hour = int(total_secound/3600)
# minutes = int((total_secound % 3600)/60)
# secound = int(total_secound % 60)

# print(f"HH:",hour,"MM:",minutes,"SS:",secound)



# angle1 = int(input("enter frist angle : "))
# angle2 = int(input("enter secound angle: "))
# angle3 = 180-(angle1+angle2)
# print(f"thard angle is:",angle3)




# # fibonacci series in python
# a = 0
# b = 1

# n = int(input("enter number of turn: "))
# for i in range(n):
#     print(a)
#     c = a+b
#     a = b
#     b = c



# def factorial(n):
#     result = 1
#     for i in range(1, n + 1):
#         result *= i
#     return result

# # Example usage
# number = int(input("Enter a number: "))
# print(f"The factorial of {number} is {factorial(number)}")




# def factorial(n):
#     result = 1
#     for i in range(1,n + 1):
#         result *= i
#     return result
# num = int(input("enter any number: "))    
# print(f"the factorial number is: ,{num} is,{factorial(num)}")


# temp = -5
# if temp < 0:
#     print("it a freezing")
# elif temp < 10:
#     print("it a cool")
# elif temp < 20:
#     print("it a cool")
# elif temp < 30:
#     print("it a warm")
# else:
#     print("too hot")
  



# print("select opretion")
# print("1. addition")
# print("2. subtract")
# print("3. multiplaction")
# print("4. divide")

# choice = int(input("enter choice:"))
# num1 = int(input("enter frist number: "))
# num2 = int(input("enter secound number: "))

# if choice == 1:
#     print(f"{num1} + {num2} = {num1+num2}")
# elif choice == 2:
#     print(f"{num1} - {num2} = {num1-num2}")
# elif choice == 3:
#     print(f"{num1} * {num2} = {num1*num2}")
# elif choice == 4:
#     print(f"{num1} / {num2} = {num1/num2}")
# else:
#     print("invalid input")



# passward = input("set passward: ")
# comform_passward = input("conform your passward: ")


# if passward == comform_passward:
#     print("passward save successfuly ")

#     enterd = input("enter your passward to login ")
#     if enterd == passward:
#         print("login suesfully done")
#     else:
#         print("invalide passward")
# else:
#     print("invalide passward")



# username = input("set your  username: ")
# passward = input("set your passward: ")
# conform_username = input("conform your username: ")
# conform_passward = input("conform your passward: ")



# if passward == conform_passward and username == conform_username:
#     print("username and passward set succussfully")
#     print("-------------login now----------------")
#     enter_username = input("enter username: ")
#     enter_passward = input("enter passward: ")
#     if username == enter_username and passward == enter_passward:
#          print("*****************login succussfully**************")
#     else:
#              print("invalide username and passward ")
# else:
#    print("invalide username and passward ")







   
    





