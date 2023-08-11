#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines whether a randomly generated number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int number;

    srand(time(0));
    number = rand() - RAND_MAX / 2;

    if (number > 0)
    {
        printf("%d is a positive number.\n", number);
    }
    else if (number == 0)
    {
        printf("%d is zero.\n", number);
    }
    else
    {
        printf("%d is a negative number.\n", number);
    }

    return 0;
}

