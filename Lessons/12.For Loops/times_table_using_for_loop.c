#include <stdio.h>

int main(){
    int x;
    int value = 7;

    for (x = 1; x < 11; x++){
        /*printf("The value of %d", value);
        printf(" x %d", x);
        printf(" is %d\n", x * value);*/

        // Using some syntactic sugar we can write those three lines as follows:
        printf("The value of %d x %d is %d\n", value, x, x * value);
    }
    return 0;
}