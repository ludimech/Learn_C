#include <stdio.h>

int main(){
    //array which is declared and intialized
    int numbers[6] = {12, 34, 4, 21, 55, 16};
    for (int i = 0; i < 6; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    //array which is declared but not initialized

    int nums[6];
    for (int j = 0; j < 6; j++){
        nums[j] = j;
        
        printf("%d ", nums[j]);
    } 
    return 0;
}