#include "main.h"

int check_pal(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks the  given string is a palindrome.
 * @s: string to be reversed
 * Return: 1 if it is, 0 if it's not a palindrome
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
int length = _strlen_recursion(s);
return (check_pal(s, 0, length - 1));
}

/**
 * _strlen_recursion - returns the length of a string s
 * @s: string whose length is being calculated
 * Return: length of the string s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - still checks recursively checks for palindrome
 * @s: string to be checked
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 if not a palindrome
 */

int check_pal(char *s, int start, int end)
{
if (*(s + start) != *(s + end))
return (0);
if (start >= end)
return (1);
return (check_pal(s, start + 1, end - 1));
}
