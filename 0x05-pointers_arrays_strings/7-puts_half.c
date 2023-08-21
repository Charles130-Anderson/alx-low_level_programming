#include "main.h"

/**
* puts_half - Prints the second half of a string
* @str: Input string
* Return: No return value
*/
void puts_half(char *str)
{
int count = 0, i;

while (count >= 0)
{
if (str[count] == '\0')
break;
count++;
}

if (count % 2 == 1)
i = count / 2;
else
i = (count - 1) / 2;

for (i++; i < count; i++)
_putchar(str[i]);

_putchar('\n');
}
