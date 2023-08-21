#include "main.h"
#include <stdio.h>

int _strlen(char *str)
{
int len = 0;

while (*str != '\0')
{
len++;
str++;
}

return len;
}

void puts_half(char *str)
{
int len = _strlen(str);
int start_index;

if (len % 2 == 0)
{
start_index = len / 2;
}
else
{
start_index = (len - 1) / 2;
}

for (int i = start_index; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
