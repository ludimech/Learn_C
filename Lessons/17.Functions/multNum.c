#include <stdio.h>

//declaring multnum function 
int multNum(int num1, int num2){
    return num1 * num2;
}

int main(){
    int n1;
    int n2;
    int result;

    printf("Enter a number: \n");
    scanf("%d",&n1);
    printf("Enter a number: \n");
    scanf("%d",&n2);
    result = multNum(n1,n2);
    printf("Product of two numbers is: %d\n", result);
    return 0;
}