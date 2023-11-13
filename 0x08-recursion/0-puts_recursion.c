#include <stdio.h>

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Prints a string, followed by a new line, using recursion
 * @param s - the string to be printed
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;}

putchar(*s);
_puts_recursion(s + 1);
}
