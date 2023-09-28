#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int number.
 * @index: index of the bit to retrieve, starting from 0.
 *
 * Return: value of the bit at index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

if (index >= sizeof(unsigned long int) * 8)
return (-1);

mask = 1UL << index;
if ((n & mask) != 0)
return (1);
else
return (0);
}
