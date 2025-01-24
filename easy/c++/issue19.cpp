/* 
Create a function that takes an integer 
and returns true if it's divisible by 100, 
otherwise return false.
*/

#include <iostream>

using namespace std; 

bool divisible(int num) {

    if(num % 5 == 0 && num % 10 ==0) {
        return true; 
    }else{
        return false; 
    }
}

int main() {
    bool value = divisible(30);
    if(value == 1) {
        cout << "True" << endl; 
    }else{
        cout << "False" << endl; 
    }
    

return 0; 
}