#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
char *result;
int length1, length2;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

length1 = length2 = 0;
while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

result = malloc(sizeof(char) * (length1 + length2 + 1));
if (result == NULL)
return (NULL);

i = j = 0;
while (s1[i] != '\0')
{
result[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
result[i] = s2[j];
i++;
j++;
}

result[i] = '\0';
return (result);
}
