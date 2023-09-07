#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
printf("malloc failed. Terminating process with status 98.\n");
exit(98);
}
return (ptr);
}
