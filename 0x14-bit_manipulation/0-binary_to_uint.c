#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int.
 * @b: pointer to string of 0 and 1 chars.
 *
 * Return: converted number, or 0 if invalid or NULL.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);

result = result * 2 + (b[i] - '0');
}

return (result);
}
