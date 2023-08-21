/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 *
 * Return: void
 */
void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}

s--;

for (int i = length; i > 0; i--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}

