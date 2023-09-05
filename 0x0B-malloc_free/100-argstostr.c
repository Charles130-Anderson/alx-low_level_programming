#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of the program
* @ac: number of arguments
* @av: array of arguments
* Return: Pointer to the new string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)
{
int index1, index2, index3, length;
char *string;

if (ac == 0 || av == NULL)
return (NULL);

length = 0;
for (index1 = 0; index1 < ac; index1++)
{
for (index2 = 0; av[index1][index2] != '\0'; index2++)
length++;
length++;
}

string = malloc(sizeof(char) * (length + 1));

if (string == NULL)
return (NULL);

index3 = 0;

for (index1 = 0; index1 < ac; index1++)
{
for (index2 = 0; av[index1][index2] != '\0'; index2++)
{
string[index3] = av[index1][index2];
index3++;
}
string[index3] = '\n';
index3++;
}

return (string);
}
