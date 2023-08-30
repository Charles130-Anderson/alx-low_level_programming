#include "main.h"

/**
 * wildcmp - Compare strings s1 and s2
 * @s1: pointer to string parameters
 * @s2: pointer to string parameters
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2 || *s2 == '*')
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (0);
}
