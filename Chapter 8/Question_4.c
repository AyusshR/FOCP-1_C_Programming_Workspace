/*Salting
 Find the salted form of a password entered by the user if the salt is "123" & added at the end*/

#include <stdio.h>
#include <string.h>

void salting(char password[]){
    char salt[100] = "123";
    char newPass[100];
    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}
int main(){
    char arr[100];
    gets(arr);
    salting(arr);

    return 0;
}