#include <stdio.h>

int main()
{
    int x = 5;

    while (x < 50){
        printf("The value of x is %d\n", x);
        x*=5;
    }
    return 0;
}

// output is 5, 25, 125 but since 125 > 50 then it is not printed, and hence the loop terminates.