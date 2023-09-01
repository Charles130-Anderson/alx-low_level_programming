#include "main.h"

/**
 * _strpbrk - Find first occurrence of any character from a set in a string.
 * @s: The input string to search.
 * @accept: The set of characters to search for.
 *
 * Return: A pointer to the first occurrence of a character .
 * If no matching character is found, return NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
