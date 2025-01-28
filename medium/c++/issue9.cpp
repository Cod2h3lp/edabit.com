/* 
Create a function that takes a string and returns 
the word count. The string will be a sentence.
*/

#include <iostream> 
#include <cstring>

using namespace std; 

int count_words(char *str) {
    
    int words = 0; 
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ') {
            words += 1; 
        }
    }
    return words + 1; 
}
int main() {
    int num = count_words("This is a simple example!"); 
    cout << "Word count: " << num << endl; 
return 0; 
}