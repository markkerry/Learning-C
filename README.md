# Learning-C

[![Build status](https://ci.appveyor.com/api/projects/status/n270qj9742tycb5b/branch/master?svg=true)](https://ci.appveyor.com/project/markkerry/learning-c/branch/master)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/markkerry/Learning-C/blob/master/LICENSE)

Basics of the C programming language

## Key

| Examples                | Description               |
|-------------------------|---------------------------|
| #include #define        | Preprocessor Directives   |
| stdio.h math.h string.h | Header Files              |
| main() printf()         | Functions                 |
| return while float      | Commands                  |
| if elseif else          | Statements                |
| %d %f %c %s             | Conversion Characters     |
| \n \a \t                | Escape Sequences          |
| && !                    | Logical Operators         |
| == > < >= !=            | Relational Operators      |
| &  *                    | Pointer Operators         |
| *= /= %= += -=          | Compound Operators        |
| /* This is */           | Comments                  |
| (5 * 2 - 6)             | Expression                |

## Compiling C code

`gcc -o test ./test.c`

## Helloworld

``` C
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
    printf("hello again!!\n");
    return 0;
}
```

## The printf() function

main() is a function, printf() is a function and return is a command.
Notice a char requires single quotes '', an int or float does not.
And a string requires double quotes ""

``` C
// prints a character and numbers
#include <stdio.h>

int
main(void)
{
    printf("A test char of %c\n", 'B');
    printf("A test int of %d\n", 87);
    printf("A test float of %.1f\n", 85.9);
    return 0;
}
```

## For loop

``` C
#include <stdio.h>
// Prints "This is a Test!" 10 times

int main(void)
{
    for (int i = 0; i < 10; i++)
    {
        printf("This is a Test!\n");
    }
}
```

## Variables and Constants

``` C
#include <stdio.h>
#include <string.h>
#define NAME "Mark Kerry"

// NAME constant defined above

int n = 0;      /* Global Variables - before the main() function */
char x = 'X';

int main(void)

{
    long int l = 500000;    /* Local Variables - in the main() function */
    float f = 0.0002;

    /* There is not a default string variable. You have to create a char array.
    This can be done in a few different ways
    */
    char name[11] = "Mark Kerry"; 
    char name2[] = "Mark Kerry";
    char name3[11];
    strcpy(name3, "Mark Kerry");
    
    /* Code goes here */
    
    return 0;
}
```

## The if, else Statements

The if statement uses relational operators to check whether something is true and if so, executes code. If the statement is false the else statement to executes different code. 

``` C
int b;
int b;

printf("Please enter a positive number: ");
scanf("%d", &a);
printf("Please enter another positive number: ");
scanf("%d", &b);
    
if (a < b)
{
    printf("%d is less than %d\n", a, b);
}
else if (a == b)
{
    printf("%d is equal to %d\n", a, b);
}
else
{
    printf("%d is more than %d\n", a, b);
}
```

## Logical Operators

```C
if ((num >= 10) && (num <= 100))
{
    // num is between 10 and 100
}

if ((num == 0) || (num2 > 1000))
{
    // do something
}
```