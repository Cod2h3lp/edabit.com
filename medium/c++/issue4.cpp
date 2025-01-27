/*
Create a function that returns the string "Burp" 
with the amount of "r's" determined by the 
input parameters of the function.
*/

#include <iostream>
#include <cstring>

using namespace std; 

int number_r(char *str) {
    int r = 0; 
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'r') {
            r += 1; 
        } 
    }
return r; 
}

using namespace std; 

int main() {
    int ret = number_r("Burrrp"); 
    cout << "numbers of r's are: " << ret << endl;
return 0; 
}