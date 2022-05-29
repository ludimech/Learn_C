#include <stdio.h>

int main(){

    int i;
    int choice = 0;

    printf("Choose your number: ");
    scanf("%d", &choice);

    for (i = 0; i < 11; i++){
        printf("\n%d x %d = %d", choice, i, choice * i);
    }
    return 0;
}