#include "main.h"

int check_pal(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: string to br reverseed
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
if (*s == '\0')
return (1);
return (check_pal(s, 0, length - 1));
}
/**
*_strlen_recursion - returns thre length of the given string
*@s: the string used
*Return: the length of the string.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @start: starting index
 * @end: ending index
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int start, int end)
{
if (*(s + start) != *(s + end))
return (0);
if (start >= end)
return (1);
return (check_pal(s, start + 1, end - 1));
}
