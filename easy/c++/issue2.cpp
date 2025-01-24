// Problem -> Convert minutes into seconds. 

#include <iostream>

using namespace std; 

// Function responsible for convertion. 

int convert(int x) {
    return x * 60; 
}

// Main function. 

int main() {

    int y = convert(10); 
    cout << y << endl; 
return 0; 
}