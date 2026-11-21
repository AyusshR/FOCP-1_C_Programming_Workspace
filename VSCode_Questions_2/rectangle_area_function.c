/*Rectangle area function, write a complete C program that defines a dedicated function
to compute the product of length and width using a wide integer type (long long)
to prevent integer overflow on large boundary inputs.*/

#include <stdio.h>

long long area(int length, int width){
    return (long long)length * width;
}

int main(){
    int length, width;

    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);

    printf("Area = %lld", area(length, width));

    return 0;
}