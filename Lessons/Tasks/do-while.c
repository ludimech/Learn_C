#include <stdio.h>

int main(){

    int x = 5;

    do {
        printf("The value of x is %d\n", x);
        x--;
    }
    while (x > 0);
    return 0;
}