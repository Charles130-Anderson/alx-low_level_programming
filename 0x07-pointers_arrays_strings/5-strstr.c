#include "main.h"

/**
 * _strstr - Find the first occurrence of a substring in a string.
 * @haystack: The input string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the first occurrence of the substring in the string.
 *         If the substring is not found, return NULL.
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}
