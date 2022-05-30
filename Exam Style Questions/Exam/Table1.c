#include <stdio.h>

int main(){
    
    //declaring variables
    int i;
    int num = 7; //number to be multiplied is 7
    
    for(i = 1; i < 11; i++){
        printf("%d x %d = %d\n", num, i, i * num);
    }
    return 0;
}
