#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 if successful, 1 if the number of arguments is incorrect,
 *         2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
int num_bytes, i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

unsigned char *opcodes = (unsigned char *)main;

for (i = 0; i < num_bytes - 1; i++)
{
printf("%02x ", opcodes[i]);
}

printf("%02x\n", opcodes[i]);

return (0);
}
