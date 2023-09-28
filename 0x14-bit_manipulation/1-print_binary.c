#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int number to print in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int flag = 0;

if (n == 0)
{
putchar('0');
return;
}

while (mask > 0)
{
if ((n & mask) != 0)
{
putchar('1');
flag = 1;
}
else if (flag)
{
putchar('0');
}
mask = mask >> 1;
}
}
