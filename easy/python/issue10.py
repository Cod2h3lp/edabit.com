#!/usr/bin/python2 
# Problem -> Create a function that takes a base 
#number and an exponent number and returns the calculation.

def power(base, exponent):
    x = 0
    y = 0
    while x < exponent:
        y += base * base
        x += 1
    return y 

print(power(2,3))