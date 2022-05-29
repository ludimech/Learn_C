#include <stdio.h>

int main(){

    const float num1 = 3.43;
    const float num2 = 5.98;
    double product = num1 * num2;

    printf("%.2f x %.2f = %.2lf", num1, num2, product);

    return 0;
}