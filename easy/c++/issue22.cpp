/*
Create a function that takes the age in years 
and returns the age in days.
*/

#include <iostream> 

int ages_to_days(int age) {
    return age * 365; 
}
using namespace std; 

int main() {
    int age = 2;
    int days = ages_to_days(age); 
    cout << age << " ages equals " << days << " days" << endl; 
return 0; 
}