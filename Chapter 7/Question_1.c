//Write a program to enter price of three items & print their final cost with gst
#include <stdio.h>

int main(){
    float price[3];
    printf("Enter Price of First Item: ");
    scanf("%f", &price[0]);

    printf("Enter Price of Second Item: ");
    scanf("%f", &price[1]);

    printf("Enter Price of Third item: ");
    scanf("%f", &price[2]);

    printf("Price of First :%.2f, Second : %.2f, Third: %.2f", price[0] + 0.18 * price[0], price[1] + 0.18*price[1], price[2] + 0.18*price[2]);
    return 0;
}