#include <stdio.h>

int main(){

    int nums[5];

    for(int i = 0; i < 5; i++){
        printf("\nEnter number n%d: ", i);
        scanf("%d", &nums[i]);
    }
    
    return 0;
}