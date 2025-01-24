// Problem -> Convert hours in seconds. 

#include <iostream>

using namespace std; 

int convert_to_seconds(int hours) {
    return (hours * 60) * 60;
}

int main() {
    int seconds = convert_to_seconds(1); 
    cout << seconds << endl; 
return 0; 
}