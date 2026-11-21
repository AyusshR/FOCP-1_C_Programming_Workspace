/*To count how many positive integers from 1 through n are divisible by a
positive integer k, use integer division n / k when
n >= 1 , and return 0 for non-positive n.*/
#include <stdio.h>

int countMultiples(int n, int k){
    return n / k;
}

int main(){
    int n, k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    printf("Count = %d", countMultiples(n, k));

    return 0;
}