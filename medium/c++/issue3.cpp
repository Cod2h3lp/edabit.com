/*
Given an array, return true if there are 
more odd numbers than even numbers, 
otherwise return false.
*/

#include <iostream>

using namespace std; 

bool more_count(int arr[]) {
    int even = 0; 
    int odd = 0; 

    for(int i = 0; i < 7; i++) {
         if(arr[i] % 2 == 0) {
            even += 1; 
         }else{
            odd += 1; 
         }
    }
    
    if(even > odd) {
        return true; 
    }else{
        return false; 
    }
}
int main() {
    int arr[] = {2,5,3,6,7,8,9}; 
    bool value = more_count(arr);
    if(value == 0) {
        cout << "We have more evens." << endl; 
    }else{
        cout << "We have more odds." << endl; 
    }
return 0; 
}