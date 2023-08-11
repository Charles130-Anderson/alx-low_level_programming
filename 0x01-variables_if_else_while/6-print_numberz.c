#include <stdio.h>

/**
 * main - Prints digits from 0 through 9.
 *
 * Return: Always return 0 when successful
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
