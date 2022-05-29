#include <stdio.h>

int main(){

    int num[5];


    for (int i = 0; i < 5; i++){
        printf("\nEnter number: ");
        scanf("%d", &num[i]);
    }
    printf("The numbers entered are: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
    return 0;
}