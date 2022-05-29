#include <stdio.h>

int main(){

    int p;
    int t;
    int r;
    

    printf("\nTo calculate your interest, please give us the following: ");
    printf("\nPrincipal Payment: ");
    scanf("%d", &p);
    printf("\nTime to pay interest: ");
    scanf("%d", &t);
    printf("\nInterest Rate of Loan: ");
    scanf("%d", &r);

    printf("\nYour Simple Interest is %d", (p * t * r) / 100);
    printf("\nYour total loan payment is %d", p + ((p * t * r) / 100));
    return 0; // Having problems when using float to store variables
}