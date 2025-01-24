#------------------------------------------------------------------
#!/usr/bin/python2 
# -----------------------------------------------------------------
# Problem: Check if number is less or equal to zero. 
#------------------------------------------------------------------

def lessEqual(a):
	if a < 0 or a == 0:
		return True
	else:
		return False

print(lessEqual(-6))