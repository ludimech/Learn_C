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
    
    printf("Product of two numbers is: %d\n", multNum(n1, n2));
    return 0;
}