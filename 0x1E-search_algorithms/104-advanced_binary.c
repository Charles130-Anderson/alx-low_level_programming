#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - Prints the array to be searched
 * @array: The array to print
 * @left: The starting index of the array
 * @right: The ending index of the array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[right]);
}

/**
 * advanced_binary_recursive - Recursive helper function
 * @array: The array to search in
 * @left: The starting index of the array
 * @right: The ending index of the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(array, left, mid, value));
		}
		else if (array[mid] > value)
			return (advanced_binary_recursive(array, left, mid - 1, value));
		else
			return (advanced_binary_recursive(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers using
 *                   advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
