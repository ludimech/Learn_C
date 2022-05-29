# Question

Write a program which displays the multiplication table for a given number. The program should:
- contain necessary variables with **hard coded** values
- output the table to terminal in the following format: 1 x 10 = 10

## Logic

We need a loop for such a question, best being a for loop. 

We first initialize a variable **int start;** to act as a starting point for the table up to 10.
Then we need to initialize a second variable **int choice = 0;** to hold our chosen multiplier number. 

A printf statement should display "Enter your number: ".

A for loop is used as follows:
```C
for (x = 1; x < 11; x++){
    printf("The value of %d x %d is %d", choice, start, start x choice);
}
return 0;
}
```