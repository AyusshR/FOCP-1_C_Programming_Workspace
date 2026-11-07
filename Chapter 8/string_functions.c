// Ask and print the full name of the user
#include <stdio.h>

// scanf cannot input multi-word strings with spaces
// gets() input a string even a multiword
// puts() outputs a string
// fgets( str, n , file) stops when n -1 chars input or new line is entered
int main(){
    char str[100];
    // gets(str); outdated gets hacked often cause it doesn't know the maximum value of string
    fgets(str, 100, stdin);
    puts(str);
    return 0;
}