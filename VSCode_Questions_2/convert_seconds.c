/*To convert total seconds into hours, remaining minutes, and remaining seconds in C, use integer division
(/) and the modulo operator (%) inside a dedicated conversion function.*/

#include <stdio.h>

int main(){
    int totalSeconds, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("%d %d %d", hours, minutes, seconds);

    return 0;
}