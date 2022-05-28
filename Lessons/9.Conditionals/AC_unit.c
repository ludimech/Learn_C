#include <stdio.h>

int main(){

    int choice = 0;

    printf("A/C Remote Menu: \n");
    printf("1. Cool \n");
    printf("2. Heat \n");

    printf("Enter your selection: ");
    scanf("%d", &choice);

    if(choice == 1){
            printf("Cooling is on");
        }
    
    if(choice == 2){
            printf("Heating is on");
        }
    return 0;
}