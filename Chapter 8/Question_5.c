//Write a function named slice, which takes a string and returns a sliced string from index n to m
#include <stdio.h>
#include <string.h>

void slice(char str[]){
    char newString[100];
    int j = 0;
    for(int i = 3; i <= 6; i++, j++){
        newString[j] = str[i];
    }
    newString[j] = '\0';
    puts(newString);
}

int main(){
    char str[] = "HelloWorld";
    slice(str);
}