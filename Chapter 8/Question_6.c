//Check if the given character is present in the string or not
#include <stdio.h>

int checkChar(char ch,char str[]){
    for(int i = 0; str[i] != '\0'; i++ ){
        if (str[i] == ch){
            return 1;
        }
    }
    return 0;
}

int main(){
    char str[] = "HelloWorld";
    char ch = 'o';
    int result = checkChar(ch, str);
    printf("%d", result);

    return 0;
}