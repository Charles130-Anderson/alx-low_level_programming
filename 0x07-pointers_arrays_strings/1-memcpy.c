#include "main.h"

/**
 * _memcpy - Copy a memory area from source to destination.
 * @dest: The destination memory where the data is stored.
 * @src: The source memory to be copied.
 * @n: The number of bytes to be copied.
 *
 * Return: The modified destination memory with the specified number of bytes copied.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
