//Taking input from the user using %c

#include <stdio.h>

int main(){
    char input[100];
    char ch;
    int i = 0;

    while (ch != '\n'){
        scanf("%c", &ch);
        input[i] = ch;
        i++;
    }
    input[i] = '\0';
    puts(input);
}