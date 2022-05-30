#include <stdio.h>
#include <math.h> //using math.h for sqrt() function

int main(){

    //initialising Variables where I is not given a value but has a null space
    float I;
    float P = 0;
    float R = 0;
    float V; //Variable for voltage to be worked out after I

    //asking for power value from user
    printf("\nEnter Power: ");
    scanf("%f", &P);

    //asking for resistance value from user
    printf("\nEnter Resistance: ");
    scanf("%f", &R);

    I = sqrtf((P / R));

    //working out current
    printf("\nCurrent: %0.2f", I);

    //working out voltage

    V = I * R;
    printf("\nVoltage: %0.2f", V);

    return 0;    
}