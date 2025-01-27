/* 
Create a function that counts the number of syllables 
a word has. Each syllable is separated with a dash -.
*/

#include <iostream>
#include <string>

using namespace std; 

int num_sys(string str) {
    int count = 0; 
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == '-') {
            count++; 
        } 
    } 
    return count + 1; 
} 
int main() {
    int num = num_sys("fe-li-pe");
    cout << "Num: " << num << endl;  
return 0; 
}