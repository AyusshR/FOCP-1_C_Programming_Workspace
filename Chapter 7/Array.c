#include <stdio.h>

int main(){
    // int marks1 = 97; // 0 address
    // int marks2 = 98; // 1 address
    // int marks3 = 99; // 2 address
    
    // int marks[] = {97, 98, 99};
    // printf("%d", marks[1]);

    int marks[3];
    printf("Enter Phy marks: ");
    scanf("%d", &marks[0]);

    printf("Enter Maths marks: ");
    scanf("%d", &marks[1]);

    printf("Enter Chem marks: ");
    scanf("%d", &marks[2]);

    printf("Chem : %d, Phy : %d, Maths : %d", marks[0], marks[1], marks[2]);
    return 0;
}