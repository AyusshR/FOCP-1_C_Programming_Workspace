// Write a program to store the first n fibonacci numbers in an array
#include <stdio.h>

void sequenceFibonacci(int arr[],int n){
    int fib = 0;
    int a = 0;
    int b = 1;
    for(int i = 1; i <= n; i++){
        fib = a + b;
        a = b, b = fib; 
        arr[i+1] = fib;
    }
}

int main(){
    int n = 10;
    int arr[12] = {0, 1, 0, 0, 0, 0 ,0, 0, 0, 0, 0, 0};
    sequenceFibonacci(arr, n);
    for (int i = 0; i <= 11; i++) {
        printf("arr[%d] : %d\n", i, arr[i]);
    }
    return 0;
}