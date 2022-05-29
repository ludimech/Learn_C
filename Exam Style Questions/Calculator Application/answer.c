#include <stdio.h>

int multNum(int num1, int num2) {
    return num1 * num2;
}

int divNum(int num1, int num2) {
    return num1 / num2;
}

int addNum(int num1, int num2) {
    return num1 + num2;
}

int subNum(int num1, int num2) {
    return num1 - num2;
}

int main(){

    int choice = 0;
    int i;
    int num1;
    int num2;

    printf("Choose: \n");
    printf("1. Multiplication \n");
    printf("2. Division \n");
    printf("3. Addition \n");
    printf("4. Subtraction \n");
    printf("5. End \n");

    printf("\nYour choice is: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nChoose n1: ");
            scanf("%d", &num1);
            printf("\nChoose n2: ");
            scanf("%d", &num2);

            printf("%d x %d = %d\n", num1, num2, multNum(num1, num2) );

        break;
    
        case 2:
            printf("\nChoose n1: ");
            scanf("%d", &num1);
            printf("\nChoose n2: ");
            scanf("%d", &num2);
              
            printf("%d / %d = %d\n", num1, num2, divNum(num1, num2) );
        break;
    
        case 3:
            printf("\nChoose n1: ");
            scanf("%d", &num1);
            printf("\nChoose n2: ");
            scanf("%d", &num2);

            printf("%d + %d = %d\n", num1, num2, addNum(num1, num2) );
        break;
  
        case 4:
            printf("\nChoose n1: ");
            scanf("%d", &num1);
            printf("\nChoose n2: ");
            scanf("%d", &num2);
            printf("%d - %d = %d\n", num1, num2, subNum(num1, num2) );
        break;

        case 5:
            printf("Thank you for your time!");
        break;  

        default: printf("Sorry, that is not an option.");
    
}

return 0;

}