#!/usr/bin/python2 
# Problem -> Create a function that takes a 
# boolean variable flag and returns it as a string.

def boolean_to_string(boolean):
    if boolean == True:
        return "True"
    elif boolean == False:
        return "False"

status = boolean_to_string(True)
print(status)