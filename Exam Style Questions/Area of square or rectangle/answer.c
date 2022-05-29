#include <stdio.h>

int main(){

    //intiializing variables
    float length;
    float breadth;
    

    printf("\nEnter length of quadrilateral: ");
    scanf("%f", &length);

    printf("\nEnter breadth of quadrilateral: ");
    scanf("%f", &breadth);

    printf("\nThe area of the quadrilateral is: %.2f", length * breadth);

    return 0;
}