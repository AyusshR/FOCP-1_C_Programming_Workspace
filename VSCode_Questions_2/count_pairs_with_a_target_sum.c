/*Count index pairs (i < j) with a target sum*/

#include <stdio.h>

int main(){
    int n, target, i, j, count = 0;
    int a[100];

    printf("Enter n and target: ");
    scanf("%d %d", &n, &target);

    printf("Enter array elements: ");

    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(a[i] + a[j] == target){
                count++;
            }
        }
    }

    printf("Count = %d", count);

    return 0;
}