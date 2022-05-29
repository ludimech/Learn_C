#include <stdio.h>

int main(){

    int nums[5];
    int i;
    int pos;
    int small;

    for (i = 0; i < 5; i++){
        printf("\nEnter number n%d: ", i);
        scanf("%d", &nums[i]);
    }

    small = nums[0];
    pos = 0;

    for(i = 0; i < 5; i++){
        if (small > nums [i]){
            small = nums[i];
            pos = 1 + i;
        }
    }

    printf("\nBiggest of 5 numbers is %d, at position %d\n", small, pos);
    return 0;
}