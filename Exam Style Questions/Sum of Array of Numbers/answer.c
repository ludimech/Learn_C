#include <stdio.h>

int main(){

    int nums[5] = {12, 21, 25, 37, 49};
    int z = 0;
    for (int i = 0; i < 5; i++){
        
         z = z + nums[i];
    }
    printf("%d", z);
}