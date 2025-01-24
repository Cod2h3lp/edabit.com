// Problem -> Create a function that takes a number as 
//an argument and returns negative of that number. 
//Return negative numbers without any change.

#include <iostream>

int return_negative(int number) {
    int negative = number - number*2; 
return negative;  
}
using namespace std; 

int main() {
    int negative = return_negative(10); 
    cout << negative << endl; 
return 0; 
}
