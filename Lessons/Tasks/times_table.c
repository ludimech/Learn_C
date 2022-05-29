#include <stdio.h>

int main(){

    int x;
    int choice =  0;

    printf("Choose your number: ");
    scanf("%d", &choice);

    for(x = 1; x < 11; x++){
        printf("The value of %d x %d is %d\n", choice, x, x * choice);
    }
    return 0;
}