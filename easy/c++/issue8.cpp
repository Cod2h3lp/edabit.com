// Problem -> Find the perimeter of a rectangle. 

#include <iostream>

using namespace std; 

int calculate_perimeter(int a, int b) {
	int c = a*2 + b*2; 
	return c; 
}
int main() {

	int perimeter = calculate_perimeter(10,20); 
	cout << perimeter << endl; 

return 0; 
}