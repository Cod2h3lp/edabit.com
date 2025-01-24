// Problem -> Convert hours minutes into seconds. 

#include <iostream>

using namespace std; 

void convert_to_seconds(int hours, int minutes) {

	int x = hours * 60 + minutes * 60; 
	cout << "Seconds: " << x << endl;  
}
int main() {

	convert_to_seconds(1,3); 

return 0; 
}