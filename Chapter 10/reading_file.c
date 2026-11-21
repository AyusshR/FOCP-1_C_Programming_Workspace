#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch;
    fscanf(fptr, "%c" , &ch);
    printf("%c", ch);
    fscanf(fptr, "%c" , &ch);
    printf("%c", ch);
    fscanf(fptr, "%c" , &ch);
    printf("%c", ch);

    printf("%c", fgetc(fptr)); // takes a character form the file and prints it

    fgetc(fptr); //extracts a character from the pointer file

    fclose(fptr);
    return 0;
}