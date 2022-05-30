#include <stdio.h>
#include <math.h> //using math.h for sqrt() function
 
int main(){
 
    //initialising Variables where I is not given a value but has a null space
    float I;
    float P = 150;
    float R = 20;
 
 
    printf("Current: %.2f", sqrtf( P / R));
 
    return 0;    
}
