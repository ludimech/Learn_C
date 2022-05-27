# All syntax Explained

## Basic Program Syntax and Comments

Single line Comments:

```
// hi
```

Multi line Comments:

```
/*
hi
hi
hi
*/
```

Comments are ignored by the program when compiling, they are useful when reading a code-base so one can understand the importance of each function to the operation of the program.

With every file in C, we have a **pre-processor directive** which is a line of code that starts with #. They are invoked by the compiler to process some programs before compilation. The **header file** is a library or method with built in functions that can be called in the program. 

For example, in the Helloworld.c file in the Lessons folder, one can see the following:

```
#include <stdio.h> //This is the header file

int main()
{
    printf("Hello World!);
    
    return 0;
}
```

That header file allows us to call functions from the standard input output library.

## Escape Sequences

Escape sequences are a set of characters that allow us to manipulate text, they represent an action as follows:

```
\n - New Line
\t - Tab
\r - Carriage Return (moves the cursor to the beginning of the current line)
\\ - Backslash
\' - Single Quotation Mark
\" - Double Quotation Mark
```