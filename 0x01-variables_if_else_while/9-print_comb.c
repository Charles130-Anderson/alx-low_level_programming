#include <stdio.h>

/**
 * The main function prints all the potential arrangements of single-digit numbers
 * Return: This function always returns 0 to indicate success.
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
