#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/* This code will output all the possible value of character variable */

int main(void)
{
        char a;    /* decleration of character variable*/
        a = CHAR_MIN;  /* assigning a to the minium value*/
        while(a != CHAR_MAX)  /* Looping condition */
        {
                printf("%d\n", a);
                a = a+1;

        }
        exit (EXIT_SUCCESS);
}
