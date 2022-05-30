// Find max value of array

#include <stdio.h>

int main(){
    
    
    int nums[5]; //declaring 1st dimensional array
    int i; //counter variable for index of array
    int sum = 0; // sum of all values within array
    int maxnum; //to store max number in array
    int posnum; //to show position of number within array

    //for loop
    for (i = 0; i < 5; i++){
        printf("Choose n%d: ", i);
        scanf("%d", &nums[i]);
    }
    
    maxnum = nums[0];
    posnum = 0;

    //for loop that run through an if statement for each value of array
    for(i = 0; i < 5; i++){
        if (maxnum < nums[i]){ //if statement tests if num stored in position i is greater than maxnumm
            maxnum = nums[i]; //if maxnum < nums[i], then maxnum assumes value of nums[i];
            posnum = i + 1; // position variable increments by 1 if statement is true 
        }
    }

    printf("\nBiggest value of array is %d, at position %d\n", maxnum, posnum);
    return 0;
}