/* 
Create a function that takes two arguments. 
Both arguments are integers, a and b. Return true if one 
of them is 10 or if their sum is 10.
*/ 

#include <stdio.h>

bool is_ten(int a, int b) {
	if(a == 10 || b == 10 || a + b == 10) {
		return true; 
	}else{
		return false; 
	}
}
int main() {
	int ret = is_ten(10,7);
	if(ret == 1) {
		printf("True\n"); 
	}else if(ret == 0){
		printf("False\n");
	}
return 0; 
}