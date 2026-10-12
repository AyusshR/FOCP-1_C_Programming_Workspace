#include <stdio.h>

void sequenceFibonacci(void){
    int n = 10, fib = 0;
    int a = 0;
    int b = 1;
    printf("%d %d ", a, b);
    for(int i = 1; i <= n; i++){
        fib = a + b;
        a = b, b = fib; 
        printf("%d ", fib);
    }
}

int main(){
    sequenceFibonacci();
    return 0;
}