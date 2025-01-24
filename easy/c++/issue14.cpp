// Problem -> Create a function that takes a boolean variable
// flag and returns it as a string.

#include <iostream> 

char *convert_boolean(bool value) {
    
    char *ret_true = "True"; 
    char *ret_false = "False"; 

    if(value == true) {
        return ret_true; 
    }else if(value == false) {
        return ret_false; 
    }

}
using namespace std; 

int main() {
    char *res = convert_boolean(true); 
    cout << res << endl; 

return 0; 
}