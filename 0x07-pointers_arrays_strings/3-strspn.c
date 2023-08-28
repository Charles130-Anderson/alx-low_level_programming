#include "main.h"

/**
 * _strspn -length of initial segment with only matching characters.
 * @s: The input string.
 * @accept: The string with characters to match.
 *
 * Return: Length of the matching segment of the string.
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
