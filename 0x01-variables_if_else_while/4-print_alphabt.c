#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabetical letters without q and e.
 *
 * Return: Always is 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 105 && i != 117)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
