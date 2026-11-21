/*To find the maximum of three integers in C, implement the maxOfThree function
using conditional comparisons and wrap it in a complete program with standard
input/output handling.*/

#include <stdio.h>

int maxOfThree(int a, int b, int c){
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maximum = %d", maxOfThree(a, b, c));

    return 0;
}