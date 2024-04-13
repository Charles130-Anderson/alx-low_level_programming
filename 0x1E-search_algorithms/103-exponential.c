#include <stdio.h>
#include "search_algos.h"

/**
 * _binary_search - Locates a value in a sorted integer array
 *                  using the binary search algorithm.
 * @array: A pointer to the first element of the array.
 * @left: The starting index of the array.
 * @right: The ending index of the array.
 * @value: The value to locate in the array.
 *
 * Return: The index of the value if found; otherwise, -1.
 *
 * Description: Prints the current array segment being searched per iteration.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Locates a value in a sorted integer array
 *                      using the exponential search algorithm.
 * @array: A pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to locate in the array.
 *
 * Return: The index of the value if found; otherwise, -1.
 *
 * Description: Prints the value being compared at each step.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (array == NULL)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	return (_binary_search(array, left, right, value));
}
