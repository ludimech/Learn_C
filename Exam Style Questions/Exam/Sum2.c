// Array of values to be summed

#include <stdio.h>

int main(){
    
    
    int nums[5]; //declaring 1st dimensional array
    int i; //counter variable for index of array
    int sum = 0; // sum of all values within array

    for (i = 0; i < 5; i++){
        printf("Choose n%d: ", i);
        scanf("%d", &nums[i]);
    }

    //for loop to start from position index 0
    for (i = 0; i < 5; i++){
        //sum starts from 0, every loop adding the next value in the array to valus sum
        sum = sum + nums[i];
    } 
    //print sum
    printf("Sum: %d", sum);
    
    return 0;
}