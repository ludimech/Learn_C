#include <stdio.h>

int main(){

    //Initializing variables where temp is used as reference
    const int temp = 22;
    int choice = 0;
    int user_temp = 0;

    //menu for AC
    printf("\nA/C Remote Menu: ");
    printf("\n1. Cool");
    printf("\n2. Heat");
    printf("\nEnter your selection: ");
    scanf("%d", &choice);

    
    if (choice == 1){
        printf("Cooling is on\n");
        printf("Enter the desired temperature:\n");
        scanf("%d", &user_temp);

            if(user_temp == temp){
                printf("Temperature is same as room");
            } else if(user_temp < temp && user_temp < 16){
                printf("Temperature selected is lower than current temperature and out of range\n");
            } else if(user_temp < temp || user_temp > 16){
                printf("Temperature selected is lower than current temperature\n");
            }else if(user_temp > temp){
                printf("Temperature selected is higher than current temperature\n");
            }
    }

    if (choice == 2){
        printf("Heating is on\n");
        printf("Enter the desired temperature:\n");
        scanf("%d", &user_temp);

            if(user_temp == temp){
                printf("Temperature is same as room");
            } else if(user_temp < temp || user_temp > 30){
                printf("Temperature selected is higher than current temperature and out of range\n");
            }else {
                printf("Temperature selected is lower than current temperature\n");
            }
    }

    return 0;
}