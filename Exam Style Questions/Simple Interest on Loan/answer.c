#include <stdio.h>

int main(){

    const int p = 20000;
    const int r = 5;
    const int t = 5;
    float mult = p * t * r;
    float div = mult / 100; 

    printf("The simple interest of this loan is %.2f.", div);

    return 0;
}