#include <stdio.h>
#include <math.h>

int main()
{
    int side1 = 5;
    int side2 = 4;

    printf("Given that side1 = 5 and side2 = 4, side3 is: %.3f", sqrt(pow(side1, 2) + pow(side2, 2)));
    return 0;
}