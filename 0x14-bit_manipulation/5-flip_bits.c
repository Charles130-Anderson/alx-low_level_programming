#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to get from n to m.
 * @n: first unsigned long int number.
 * @m: second unsigned long int number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bits_to_flip = n ^ m;
unsigned int count = 0;

while (bits_to_flip > 0)
{
count += bits_to_flip & 1;
bits_to_flip >>= 1;
}

return (count);
}
