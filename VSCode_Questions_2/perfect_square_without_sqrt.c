/*To determine if a non-negative integer \(n\) is a perfect square without using
floating-point square roots, test candidate integers i using wide integer 
multiplication i*i samller than n to prevent integer overflow.*/

#include <stdio.h>

int isPerfectSquare(int n){
    long long i;

    for(i = 0; i * i <= n; i++){
        if(i * i == n)
            return 1;
    }

    return 0;
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d", isPerfectSquare(n));

    return 0;
}