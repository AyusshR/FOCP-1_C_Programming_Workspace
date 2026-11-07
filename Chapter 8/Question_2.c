// Make a program that inputs users name and prints its length
#include <stdio.h>

int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}

int main(){
    char arr[100];
    fgets(arr, 100, stdin);
    printf("length is %d", countLength(arr));

    return 0;
}