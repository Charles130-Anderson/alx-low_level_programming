#include <stdio.h>

/**
 * main - Classifies the number 7.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int myNumber = 7; /* Set the number to 7 */

    if (myNumber > 0)
    {
        printf("%d is positive\n", myNumber);
    }
    else if (myNumber == 0)
    {
        printf("%d is zero\n", myNumber);
    }
    else
    {
        printf("%d is negative\n", myNumber);
    }

    return 0;
}
