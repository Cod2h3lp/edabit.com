/*
Given two integers, a and b, return true if a 
can be divided evenly by b. Return false otherwise.
*/

#include <iostream>

using namespace std; 

bool evenly_div(int a, int b) {
    if(a / b % 2 == 0) {
        return true; 
    }else{
        return false;
    }
}

int main() {
    int res = evenly_div(10,5); 
    if(res == 1) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl; 
    }

return 0; 
}