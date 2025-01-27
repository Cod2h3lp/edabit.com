/*
Create a function that takes in year and 
months as input, then return what year it 
would be after n-months have elapsed.

*/

#include <iostream>

using namespace std; 

int after_months(int year, int months) {
    
    if(months < 12) {
        return year; 
    }else{
        return year + (months / 12); 
    }
}

int main() {
    int total = after_months(2,12); 
    cout << total << endl; 

return 0; 
}