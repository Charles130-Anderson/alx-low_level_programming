#include "main.h"

/**
 * _strspn - Get the length of the initial segment of a string that consists of only characters from another string.
 * @s: The input string.
 * @accept: The string containing the characters to be matched.
 *
 * Return: The length of the initial segment of the string that matches the characters in the accept string.
 */


unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
