#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int left = 0;
	int right = 0;
	int i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);

	right = jump;

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	for (i = left; i <= right && i < (int)size && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
