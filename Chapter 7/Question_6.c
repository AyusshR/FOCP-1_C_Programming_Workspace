// In an array of numbers, find how many times does a number 'x' numbers
#include <stdio.h>

int main(){
    int array[5] = {2, 5, 9, 5, 1};
    int x;
    scanf("%d", &x);
    int count = 0;

    for(int i = 0; i < 5; i++){
        if(array[i] == x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}