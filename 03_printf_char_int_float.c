// prints a character and numbers
// main() is a function, printf() is a function
// return is a command
// notice a char requires single quotes '', an int or float does not.
// and a string requires double quotes ""

#include <stdio.h>

int
main(void)
{
    printf("A test char of %c\n", 'B');
    printf("A test int of %d\n", 87);
    printf("A test float of %.1f\n", 85.9);
    return 0;
}
