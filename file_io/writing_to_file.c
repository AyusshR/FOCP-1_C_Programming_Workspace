#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "w"); //use 'a' if you want to add to the file and not rewrite the file

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O'); 

    fputc('Y', fptr); // adds the character to the file 

    fptr = fopen("test.txt", "r");

    fclose(fptr);

    return 0;
}