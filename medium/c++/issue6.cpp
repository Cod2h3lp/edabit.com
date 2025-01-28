/* 
Your job is to create a function, that takes 3 numbers: a, b, c 
and returns true if the last digit of a * b = the last digit of c. 
Check the examples below for an explanation.
*/

#include <iostream>

using namespace std; 

bool last_digit(int a, int b, int c) {
    int d = (a * b); 
    int ld = d % 10; 
    int lc = c % 10; 

    if(ld == lc) {
        return true; 
    }else{
        return false; 
    }
}
int main() {
    bool ret = last_digit(1,12,2);
    if(ret == 1) {
        cout << "True!" << endl; 
    }else{
        cout << "False!" << endl; 
    }
return 0; 
}
