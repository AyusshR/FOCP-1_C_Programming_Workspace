// Storing 2 students marks in a single 2 dimention array

#include <stdio.h>

int main(){
    // like a 2 x 3 matrix
    int marks[2][3]; // _ _ _ | _ _ _ 
    
    //marks of first student in 3 subjects
    marks[0][0] = 90;
    marks[0][1] = 88;
    marks[0][2] = 99;

    //marks of second student in 3 subjects
    marks[1][0] = 23;
    marks[1][1] = 100;
    marks[1][2] = 10;

    return 0;
}