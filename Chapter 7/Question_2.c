// Write a function to count the number of odd numbers in an array

#include <stdio.h>

int main(){
    int array[5] = {33,44,55,66,77};
    int count = 0;

    for(int i = 0; i<5; i++){
        if(array[i] % 2 != 0){
            count++;
        }
        else{
            continue;
        }
    }
    printf("%d", count);
}