#!/usr/bin/python2 

"""

In this challenge, a farmer is asking you to tell him 
how many legs can be counted among all his animals. The 
farmer breeds three species:

    chickens = 2 legs
    cows = 4 legs
    pigs = 4 legs

"""

def number_of_legs(x, y, z):
    legs = (x*2) + (y * 4) + (z * 4)
    return legs

print(number_of_legs(2,3,5))