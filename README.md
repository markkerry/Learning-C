# Learning-C
Basics of the C programming language

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
