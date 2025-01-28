/*
Your task is to create a function that takes a string, 
transforms all but the last four characters into "#" 
and returns the new masked string.
*/

#include <iostream>
#include <cstring>

using namespace std;

char *maskify(char *str) {

    int size = strlen(str) - 4;  
    char resstring[size];
    char res[4] = "####"; 

    for(int i = 0; i < size; i++) {
        resstring[i] = str[i];  
    }

    for(int i = 0; i < 4; i++) {
        resstring[size+i] = res[i];     
    }

    return resstring;    
}
 
int main() {
   char *masked = maskify("apenasumsimplestexto");
   cout << masked << endl; 
return 0; 
}