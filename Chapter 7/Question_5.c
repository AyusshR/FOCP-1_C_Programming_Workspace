// Create a 2D Array, storing the tables of 2 & 3
#include <stdio.h>

void arrayTable(int arr[][10], int n, int m, int numbers){
    for(int i = 0; i < m; i++){
        arr[n][m] = numbers * (i + 1);
    }
}

int main(){
    int marks[2][10];

    for(int i = 0; i < 10; i++){
        marks[0][i] = 2*(i+1);
        marks[1][i] = 3*(i+1);
    }
    for(int i = 0; i < 10; i++){
        printf("Table of 2 = %d\n", marks[0][i]);
    }
    for(int i = 0; i < 10; i++){
        printf("Table of 3 = %d\n", marks[1][i]);
    }
    return 0;
}