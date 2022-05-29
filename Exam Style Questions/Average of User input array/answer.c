#include <stdio.h>

int main(){

    int num[5];
    float z = 0;

    for (int i = 0; i < 5; i++){
        printf("\nEnter number n%d: ", i);
        scanf("%d", &num[i]);
    }
    printf("The array is as follows: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
    printf("\nThe average of this array is: \n");
    for (int i = 0; i < 5; i++){

        z = z + num[i];
    }

    printf("%.2f", z/5);
    return 0;
}