#include <stdlib.h>
#include "main.h"
/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */


int count_word(char *s)
{
int flag, count, w;

flag = 0;
w = 0;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}

return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int a, b = 0, c = 0, d, e = 0, f;

while (*(str + c))
c++;
d = count_word(str);
if (d == 0)
return (NULL);

matrix = (char **) malloc(sizeof(char *) * (d + 1));
if (matrix == NULL)
return (NULL);

for (a = 0; a <= c; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (e)
{
f = a;
tmp = (char *) malloc(sizeof(char) * (e + 1));
if (tmp == NULL)
return (NULL);

while (b < f)
*tmp++ = str[b++];
*tmp = '\0';
matrix[e] = tmp - e;
e++;
b = 0;
}
}
else if (b++ == 0)
b = a;
}

matrix[e] = NULL;

return (matrix);
}
