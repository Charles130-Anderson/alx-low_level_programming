#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Input array.
 * @n: Number of elements to print.
 * Return: No return.
 */
void print_array(int *a, int n)
{
    int i = 0;

    for (; i < n; i++)
    {
        printf("%d", *(a + i));
        if (i != (n - 1))
            printf(", ");
    }
    printf("\n");
}
