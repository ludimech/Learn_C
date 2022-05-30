#include <stdio.h>
#include <math.h> //using math.h for sqrt() function

int main(){

    //initialising Variables where I is not given a value but has a null space
    float I;
    float P = 0;
    float R = 0;

    //asking for power value from user
    printf("Enter Power: ");
    scanf("%f", &P);

    //asking for resistance value from user
    printf("Enter Resistance: ");
    scanf("%f", &R);

    I = sqrtf((P / R));

    printf("Current: %0.2f", I);

    return 0;    
}