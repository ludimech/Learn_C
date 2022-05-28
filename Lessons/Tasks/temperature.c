//the logic for such a program was somewhat flawed, the incorrect parts are commented out.

#include <stdio.h>


int main(){
    float current_temp = 0;
    int choice = 0;
    const int temp_hot = 16;
    const int temp_cold = 20;

    printf("\nA/C Remote Menu:");
    printf("\n1. Cool");
    printf("\n2. Heat");

    printf("\nEnter your selection: ");
    scanf("%d", &choice);
/*
    printf("\nEnter room temperature: ");
    scanf("%d", &current_temp);

    This logic should be placed in *every* loop below as shown
*/
    if(choice == 1){
        printf("\nCooling is on");
        printf("\nEnter room temperature: ");
        scanf("%d", &current_temp);

        //Logic here is good, we add the commented out part above here
        if(current_temp >= temp_cold){
            printf("\nFan and Compressor on");
        }
        else{
            printf("\nFan and Compressor off");
        }
    }
    if(choice == 2){
        printf("\nHeating is on");
        printf("\nEnter room temperature: ");
        scanf("%d", &current_temp);

        if(current_temp <= temp_hot){
            printf("\nFan and Compressor on");
        }
        else{
            printf("\nFan and Compressor off");
        }
    }

    return 0;
}