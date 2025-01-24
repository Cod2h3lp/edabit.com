// Problem ->  Area of triangle 

#include <iostream>

using namespace std; 

int main() {

    int x,y; 
    cout << "Type the base: "; 
    cin >> x;
    cout << "Type height: "; 
    cin >> y; 

    int area = (x * y) / 2; 
    cout << "Area: " << area << endl;    
    
return 0; 
}