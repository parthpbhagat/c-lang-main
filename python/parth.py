

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




    #   nested for loop 
# x = 1
# for x in range (1,5):
#  for j in range (1,5):
#     print("*",end=" ")
#  print()



#  print this pattern
"""
*
**
***
****
*****
"""
# r = 5
# for x in range (r,0,-1):
#  for j in range (x):
#     print("*",end=" ")
#  print()




#  r = 5
# for x in range (1,r+1):
#  for j in range (1,x+1):
#     print("*",end=" ")
#  print()



r = 6
for x in range(1,r):
   for j in range(1, x + 1):
      print(j ,end=" ")
   print()

    





