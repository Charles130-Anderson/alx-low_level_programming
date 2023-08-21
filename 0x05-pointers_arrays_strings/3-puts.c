/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string to print
 */
void _puts(char *str)
{
if (str == NULL)
return;

for (int i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
