#include "main.h"

/**
 * _strchr - Find the first occurrence of a character in a string.
 * @s: The input string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character in the string.
 *         If the character is not found, return NULL.
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
