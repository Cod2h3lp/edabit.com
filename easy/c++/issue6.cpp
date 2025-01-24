/* 
*  Check if two numbers are equal. 
*/ 

#include <iostream>

using namespace std; 

bool isEqual(int a, int b) {
    
    if(a == b) {
    	return true; 
    }else{
    	return false; 
    }
}

int main() {
	cout << isEqual(5,5) << endl; 
return 0; 
}