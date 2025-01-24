/*
*  chickens -> 2
*  cows -> 4
*  pigs  -> 4
*/ 

#include <iostream>

using namespace std; 

int animals(int a, int b, int c) {
   int d = (a*2) + (b*4) + (c*4); 
   return d; 
}

int main() {

   int first = animals(2,3,5); 
   cout << first << endl; 
   int second = animals(1,2,3); 
   cout << second << endl; 
   int third = animals(5,2,8); 
   cout << third << endl; 

return 0; 
}