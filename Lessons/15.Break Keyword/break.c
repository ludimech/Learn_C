#include <stdio.h>

int main(){

    int x;
    for (x = 0; x < 5; x++) {
        printf("The value of x is %d\n", x);
        
        if (x == 3){
            break;
        }
    }

    return 0;
}