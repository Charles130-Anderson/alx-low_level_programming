#include "main.h"
#include <stdio.h>

/**
* print_array - Prints elements of an integer array.
* @a: Pointer to the array.
* @n: Number of elements to print.
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
