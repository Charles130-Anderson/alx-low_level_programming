#include <stdio.h>
#include <stdio.h>

/**
 * Prints the content of a buffer in a formatted manner.
 *
 * @param b The buffer to print.
 * @param size The size of the buffer.
 */

void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x ", i);

for (j = i; j < i + 10; j += 2)
{
if (j < size)
printf("%02x", b[j] & 0xff);
else
printf("  ");

if (j + 1 < size)
printf("%02x", b[j + 1] & 0xff);
else
printf("  ");

printf(" ");
}

printf(" ");

for (j = i; j < i + 10; j++)
{
if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
printf("%c", b[j]);
else
printf(".");
}
else
{
printf(" ");
}
}

printf("\n");
}
}
