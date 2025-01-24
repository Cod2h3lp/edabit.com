// Problem -> Create a function which calculates 
//the amount of fuel it needs, given the distance.

#include <iostream>

using namespace std; 

int get_fuel(int fuel) {
    return fuel * 10; 
}
int main() {
    int fuel = get_fuel(23);
    cout << "It needs " << fuel << endl;  
return 0; 
}