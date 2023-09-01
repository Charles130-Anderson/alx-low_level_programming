/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
int length = 0;
int i;

while (src[length] != '\0')
length++;

for (i = 0; i <= length; i++)
dest[i] = src[i];

return (dest);
}
