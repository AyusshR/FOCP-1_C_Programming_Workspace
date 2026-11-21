/*Find the minimum absolute difference between any two distinct input values*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, diff, minDiff;
    int a[100];

    printf("Enter n: ");
    scanf("%d", &n);

    if(n < 2 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    minDiff = abs(a[0] - a[1]);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            diff = abs(a[i] - a[j]);

            if(diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("Minimum difference = %d", minDiff);

    return 0;
}
