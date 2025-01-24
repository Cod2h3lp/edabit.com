/*
Create a function that takes the number of wins,
draws and losses and calculates the number of points 
a football team has obtained so far.

    wins get 3 points
    draws get 1 point
    losses get 0 points

*/

#include <iostream>

using namespace std; 

int number_of_points(int wins, int draws, int losses) {
    int points = (wins * 3) + draws + 0; 
    return points; 
}
int main() {
    int points1 = number_of_points(3,4,2); 
    cout << "Points1 " << points1 << endl; 
return 0; 
}