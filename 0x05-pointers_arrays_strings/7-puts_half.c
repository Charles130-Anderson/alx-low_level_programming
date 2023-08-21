/**
 * puts_half - prints the second half of a string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
    int length = 0;
    int start = 0;
    int i;

    while (str[length] != '\0')
        length++;

    start = length / 2;
    if (length % 2 != 0)
        start++;

    for (i = start; str[i] != '\0'; i++)
        _putchar(str[i]);

    _putchar('\n');
}
