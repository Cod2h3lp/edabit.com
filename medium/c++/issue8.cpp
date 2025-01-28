/*
Create a function that takes an array of numbers 
and returns only the even values.
*/

#include <iostream>

using namespace std; 

void evens(int numbers[]) {
    
    int evens[7] = {0}; 

    for(int i = 0; i < 7; i++) {
        if(numbers[i] % 2 == 0) {
            evens[i] = numbers[i];
            cout << evens[i] << endl;  
        }
    }
}
int main() {
    int numbers[] = {3,4,6,2,1,7,9}; 
    evens(numbers); 
return 0; 
}