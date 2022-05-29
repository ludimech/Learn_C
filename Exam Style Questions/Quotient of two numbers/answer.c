#include <stdio.h>

int main(){

    const float num1 = 5.93;
    const float num2 = 10.23;
    double quotient = num1 / num2;

    printf("%.2f / %.2f = %.2lf", num1, num2, quotient);

    return 0;
}