#include <stdio.h>

int main(){

    int nums[5];

    for (int i = 0; i < 5; i++){
        printf("Enter a n%d: ", i);
        scanf("%d", &nums[i]);

    }
    printf("\n");
    printf("The array is: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}
