/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: Pointer to the string to print
 */
void _puts(char *str)
{
    if (str == NULL)
        return;

    for (; *str != '\0'; str++)
    {
        _putchar(*str);
    }

    _putchar('\n');
}
