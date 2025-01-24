// Problem -> Concatenate two strings. 

#include <iostream>
#include <string.h>

using namespace std; 

void concatenate(char *s) {

    char string[strlen(s) + strlen("Edabit") + 2]; 
	strcpy(string, s); 
	strcpy(string+strlen(string), "Edabit"); 
	cout << string << endl; 
}

int main() {
    
    char name[7]; 
    strcpy(name, "Felipe"); 
	concatenate(name); 

return 0; 
}