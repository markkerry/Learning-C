#include <stdio.h>

// This also includes the scanf() function.
// scanf(controlstring [, data]);

main()
{
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
    
    // Using Logical Operators
    int num;
    int num2;

    if (num >= 10) && (num <= 100)
    {
        // num is between 10 and 100
    }

    if (num == 0) || (num2 > 1000)
    {
        // do something
    }

    return 0;
}