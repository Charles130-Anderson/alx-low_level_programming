#include <stdio.h>

/**
 * main - prints the lowercase alphabetical letter in reverse,
 * then a new line
 * Returns 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
