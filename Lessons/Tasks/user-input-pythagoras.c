#include <stdio.h>
#include <math.h>

int main()
{
    int side1 = 0;
    int side2 = 0;

    printf("\nEnter your first side: ");
    scanf("%d", &side1);
    printf("\nEnter your second side: ");
    scanf("%d", &side2);

    printf("The third side of the triangle is: %.2f", sqrt(pow(side1, 2) + pow(side2, 2)));

    return 0;
}