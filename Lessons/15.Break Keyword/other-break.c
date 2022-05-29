#include <stdio.h>

int main(){
    int i;
    double number, sum = 0.0;

    for (i = 1; i<= 10; ++i){ // i++ and ++i are NOT the same, i++ first returns a value and then increments 
    // ++i, increments then returns a value

        printf("Enter n%d; ", i);
        scanf("%lf", &number); //conversion specifier %lf is for long double

        // if user enters negative number, break the loop
        if (number < 0.0){
            break;
        }

        sum += number; //sum = sum + number;
    }

    printf("Sum = %.2lf", sum);

    return 0;
}