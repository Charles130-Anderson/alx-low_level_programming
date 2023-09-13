#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executes function on each element of an array.
 *
 * @array: Pointer to array of integers.
 * @size: Size of the array.
 * @action: Pointer to function to be executed.
 *
 * Description: Iterates over each element of array and executes
 *              specified function. Returns without action if array
 *              or action pointer is NULL.
 *
 * Return: None.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
