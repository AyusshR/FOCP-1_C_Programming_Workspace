#include <stdio.h>
#include <string.h>

int main(){

    //Taking a string input from the user
    char arr[100];
    fgets(arr, 100, stdin);
    int length = strlen(arr);
    printf("length is %d\n", length-1);

    //Copying one string to another
    char oldString[] = "oldString";
    char newString[] = "newString";

    strcpy(newString, oldString);
    puts(newString);

    //String Concatenation
    char firstStr[100] = "firstStr "; //Size of first string should be big to store the value of added string as well
    char secondStr[] = "secondStr";
    strcat(firstStr, secondStr);
    puts(firstStr);

    //String Comparision
    /*Each string has a ASCII value assigned to it and this funtion compares the first letter of both string
    by taking the diffrence of their ASCII values 0 > Equal, +ve if first is bigger*/
    char Fstr[] = "Banana";
    char SStr[] = "Apple";
    strcmp(Fstr, SStr);
    printf("%d", strcmp(Fstr, SStr));

    return 0;
}