#include <stdio.h>

int main()
{
    //variable declaration and initialisation 
    int num1 = 0;
    int num2 = 0;

    //ask user to enter a number
    printf("\nEnter first number: ");
    //read input from user
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    printf("\nThe result is %d\n", num1 + num2);

    return 0;
}