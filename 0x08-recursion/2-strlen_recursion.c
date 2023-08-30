#include <stdio.h>

/**
 *  _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.i
 * Returns the length of a string using recursion
 * @param s - the string to calculate the length of
 * @return the length of the string
 */
#include <stdio.h>

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

return (1 + _strlen_recursion(s + 1));
}
