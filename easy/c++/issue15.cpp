// Problem -> Create a function that returns true if
// an integer is evenly divisible by 5, and false otherwise.

#include <iostream> 

using namespace std; 

bool divisible_five(int x) {

    if(x % 5 == 0) {
        return true; 
    }else{
        return false;
    }
}
int main() {
    bool value = divisible_five(2); 
    cout << value << endl; 
return 0; 
}