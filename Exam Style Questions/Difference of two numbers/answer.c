#include <stdio.h>

int main(){

    const int num1 = 9;
    const float num2 = 3.55;
    float difference = num1 - num2;

    printf("%d - %.2f = %.2f", num1, num2, difference);

    return 0;
}