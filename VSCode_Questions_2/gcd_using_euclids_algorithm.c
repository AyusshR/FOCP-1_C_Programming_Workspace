/*To find the greatest common divisor (GCD) of two integers in C, implement Euclid's algorithm
iteratively using the modulo operator (%) and wrap it in a complete program
with standard input/output handling.*/

#include <stdio.h>

int gcd(int a, int b){
    int temp;

    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD = %d", gcd(a, b));

    return 0;
}