#include "main.h"
#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string
 *
 * Return: Pointer to the resulting string
 */

char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = leet[j / 2];
break;
}
}
}

return (str);
}
