#include <stdio.h>

int main(){

    int nums[5];
    int big;
    int pos;
    int i;

    for(i = 0; i < 5; i++){
        printf("\nEnter number n%d: ", i);
        scanf("%d", &nums[i]);
    }

    big = nums[0];
    pos = 0;

    for(i = 0; i < 5; i++){
        if (big < nums[i]){
            big = nums[i];
            pos = i + 1;
        }
    }

    printf("\nBiggest of 5 numbers is %d, at position %d\n", big, pos);
    return 0;
}