// Write a function to reverse an array
#include <stdio.h>

void arrayReverse(int arr[], int n){
    for(int i = 0; i <= n/2; i++){
        int tmp = arr[i];
        arr[i] = arr[n-i];
        arr[n-i] = tmp;
    }
}

int main(void){
    int arr[8] = {1,2,3,4,5,6,7,8};
    arrayReverse(arr, 7);
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}