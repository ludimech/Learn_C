#include <stdio.h>

int main(){
    int num1 = 0; 
    int num2 = 0;
    int choice = 0;

    printf("\nEnter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    printf("\t\tCalculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Division\n");
    printf("4. Multiplication\n");
    printf("\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Num1 + Num2 = %d\n", num1 + num2);
        break;
    case 2:
        printf("Num1 - Num2 = %d\n", num1 - num2);
        break;
    case 3:
        printf("Num1 / Num2 = %d\n", num1 / num2);
        break;
    case 4:
        printf("Num1 * Num2 = %d\n", num1 * num2);
        break;    
    
    default: printf("No such option\n");
        break;
    }
    
return 0;
}