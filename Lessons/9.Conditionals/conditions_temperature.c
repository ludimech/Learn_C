#include <stdio.h>

int main(){

    const int temp = 35;
    int temp_now = 0;

    printf("\nEnter the current temperature: ");
    scanf("%d", &temp_now);

    //if statement
    if(temp_now >= temp){
        printf("Switching fan on\n");
    }
    else{
        printf("Switching fan off\n");
    }

    return 0;
}