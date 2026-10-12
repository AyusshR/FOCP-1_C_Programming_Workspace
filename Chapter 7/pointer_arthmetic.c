#include <stdio.h>

// Pointer can be incremented or decremented
int main(){
    int age = 22;
    int *ptr = &age;
    printf("ptr : %u\n", ptr); // lets say value of ptr is 4
    ptr++; // it changes in value acoording to the number of bytes (storage) the data type has
    printf("ptr : %u", ptr); // the value of ptr will be 8 increased by 4 bytes
    return 0;
}