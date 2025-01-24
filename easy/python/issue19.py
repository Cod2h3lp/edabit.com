#!/usr/bin/python2

"""
Create a function that takes a number as its only 
argument and returns True if it's less than or equal 
to zero, otherwise return False.

"""

def less_or_equal(num):
    if num <= 0:
        return True
    else:
        return False 

print(less_or_equal(10))
print(less_or_equal(0))