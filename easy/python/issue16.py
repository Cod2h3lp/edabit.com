#!/usr/bin/python2 

"""
Write a function that takes two integers (hours, minutes), 
converts them to seconds, and adds them.
"""

def convert_seconds(hours, minutes):
    seconds = (hours*60*60) + (minutes*60)
    return seconds

print(convert_seconds(2,0))