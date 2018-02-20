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