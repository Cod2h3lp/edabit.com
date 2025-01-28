/* 
Create a function which validates whether a 
bridge is safe to walk on (i.e. has no gaps in it to fall through).
*/

#include <iostream>
#include <cstring> 

using namespace std; 

bool bridge(char *bridge) {
    
    for(int i = 0; i < strlen(bridge); i++) {
        if(bridge[i] == ' ') {
            return false; 
        }
    }
    return true; 
}

int main() {
    bool safe = bridge("AAAABBBB"); 
    if(safe == false) {
        cout << "Not safe!" << endl; 
    }else{
        cout << "Safe!" << endl; 
    }
return 0; 
}