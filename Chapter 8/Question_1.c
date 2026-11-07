// Create a string firstName & lastName to store details of user & print all the characters using a loop 
#include <stdio.h>

void printString(char arr[]){
    for(int i = 0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main(){
    char firstName[] = "Jaun";
    char secondName[] = "Lopez";

    printString(firstName);
    printString(secondName);

    return 0;
}