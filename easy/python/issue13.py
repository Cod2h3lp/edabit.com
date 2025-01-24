#!/usr/bin/python2 

"""
Create a function that takes the number of wins, 
draws and losses and calculates the number of points a 
football team has obtained so far.

wins get 3 points
draws get 1 point
losses get 0 points
"""

def number_points(w, d, l):
    l = 0
    x = (w * 3) + d + l 
    return x 


print(number_points(3,4,2))
print(number_points(5,0,2))