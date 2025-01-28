/* 
Create a function that takes a string and returns the
 number (count) of vowels contained within it.
*/

#include <iostream>
#include <cstring>

using namespace std; 

void count_vowels(char *str) {
    
    int count = 0; 

    for(int i = 0; i < strlen(str); i++) {
       if(str[i] == 'a' || str[i] == 'e' ||
          str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u') {
            count += 1; 
          } 
    }
    cout << count << endl; 
}
int main() {
    count_vowels("felipe"); 
return 0; 
}