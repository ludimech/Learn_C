# All syntax Explained

## Lesson 1: Basic Program Syntax and Comments

Single line Comments:

```C
// hi
```

Multi line Comments:

```C
/*
hi
hi
hi
*/
```

Comments are ignored by the program when compiling, they are useful when reading a code-base so one can understand the importance of each function to the operation of the program.

With every file in C, we have a **pre-processor directive** which is a line of code that starts with #. They are invoked by the compiler to process some programs before compilation. The **header file** is a library or method with built in functions that can be called in the program. 

For example, in the Helloworld.c file in the Lessons folder, one can see the following:

```C
#include <stdio.h> //This is the header file

int main()
{
    printf("Hello World!);
    
    return 0;
}
```

That header file allows us to call functions from the standard input output library.

## Lesson 2: Escape Sequences

Escape sequences are a set of characters that allow us to manipulate text, they represent an action as follows:

```
\n - New Line
\t - Tab
\r - Carriage Return (moves the cursor to the beginning of the current line)
\\ - Backslash
\' - Single Quotation Mark
\" - Double Quotation Mark
```

## Lesson 3: Variables and Primary Data Types

A **Variable** is a place in memory where the program stores data temporarily, as the name suggests, the value can be changed as the program executes.

A **Data Type** defines the type of data assigned to a particular variable. 

```C
- short int - 8 bit integer ranging from -128 to 127 signed bits
- unsigned short int - 8 bit integer ranging from 0 to 255 unsigned bits
- signed int - 16 bit integer ranging from -32,768 to 32,768 signed bits
- unsigned int - 16 bit integer ranging from 0 to 65,535 unsigned bits
- signed long int - 32 bit integer ranging from -2,147,483,648 to 2,147,483,648 signed bits
- unsigned long int -  32 bit integer ranging from 0 to 4,294,967,295 unsigned bits
- float - 32 bit real number ranging from -3.4E-38 to +3.4E+38
- double - 64 bit real number ranging from -1.7E-308 to +1.7E+308
- long double - 80 bit real number ranging from -3.4E-4932 to +3.4E+4932
- char - Character, 8 bit unsigned ranging from 0 to 255 (ASCII)
```

## Lesson 4: Conversion Specifiers

Conversion Specifiers tell the program how to process the data stored in memory, say print here. Each specifier is preceded by %, and is followed by a character which indicates the data type of the variable. 

```C
- %d - Used with integers
- %f - Used with floating-point numbers
- %c - Used with characters
- %.1f - Floating-point number with 1 decimal place
- %.2f - Floating-point number with 2 decimal places
- %.3f - Floating-point number with 3 decimal places
- %.4f - Floating-point number with 4 decimal places
```

## Lesson 5: Constant

A constant allows us to give a variable a fixed value. By definition, variables are able to change value during execution but constant does **not** allow this.

## Lesson 6: Mathematical Operators

### Basic Functions

```C
// Given that a = 15 and b = 6
+ , Addition // a + b, would return 21
- , Subtraction // a - b, would return 9
* , Multiplication // a * b, would return 90
/ , division // a / b, would return 2
% , modulus // a % b, would return 3 (the remainder)
```

## Lesson 7: Reading Input from a user

Reading input allows us to create programs that require interaction from a user. 

**This is done using:**

```C
scanf("%d", &num1);
```
In line 110, or the above line of code illustrating scanf, we are reading a value from the user and storing it in num1. 

The '&' sign is known as an **address operator** which contains a pointer to the memory location of the particular variable.

## Lesson 8: Further Header Files (math.h)

Using math.h we are able to use more complex mathematical calculations as shown in 8.more_mathops.

## Program Flow Control

Programs follow a chronological order of sorts where a task is executed one after the other. We are either able to create programs that run sequentially or programs that take different paths according to some conditions. Said conditions might be **relational**, or **logical expressions** and **loops**

## Lesson 9: Conditionals

When a condition is presented in a program, we get a logical 0 or logical 1, or return a Boolean value, i.e. **true or false**. If the condition is **true**, a set of statements will be executed. Alternatively, if the condition is **false**, a different set of statements is executed.

```C
- < - Smallet than
- > - Greater than
- <= - Smaller or equal to, (a<=3) : if a is 2 or 3, then result of comparison is TRUE
- >= - Greater or equal to, (a>=3) : if a is 3 or 4, then result of comparison is TRUE
- == - Equal to 
- != - Not equal
```

These operators would be used when specifying conditions, for example the following:

```C
if (temp_now >= temp){
    printf("Switching fain on\n");
}
```
In the above code snippet, if the value stored in temp_now is greater or equal to the value stored in temp, then the statement “Switching fan on” will be displayed. This happens because the expression evaluated to ‘true’. If the expressions returned ‘false’, then nothing will be displayed as the printf() statement will be skipped.
