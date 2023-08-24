#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if strings are equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return ((int)(*s1 - *s2));
}
