#!/usr/bin/python2

"""
Create a function that takes a list of numbers. 
Return the largest number in the list. 
"""

def largest_number(mylist):
    larg = 0 
    x = 0
    for i in my_list:
        if i != 40 and my_list[x+1] != 40:
            if my_list[x] > my_list[x+1]:
                larg = my_list[x]
            else:
                larg = my_list[x+1]
            x += 1
    return larg


my_list = [30,20,50,60,30,30,70,40] 
print(largest_number(my_list))