#include <stdio.h>

int main()
{
    //declaring variable with the float data type
    float a = 3.14159265359;

    printf("For this instance, a is: %.1f", a);
    printf("\nFor this instance, a is: %.3f", a);
    printf("\nFor this instance, a is: %.5f", a);
    printf("\nFor this instance, a is: %.7f", a); //after this point float looses accuracy
    printf("\nFor this instance, a is: %.9f", a); //this is where we start using double for greater accuracy

    return 0;
}