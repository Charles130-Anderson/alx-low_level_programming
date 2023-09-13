#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 *
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 * @cmp: Pointer to the function used to compare values.
 *
 * Description: Searches for the first non-zero element in the array.
 *              Returns its index. If no match or size <= 0, returns -1.
 *
 * Return: Index of the first matching element, or -1 if no match found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
