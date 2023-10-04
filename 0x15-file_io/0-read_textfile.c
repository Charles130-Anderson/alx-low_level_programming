#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Read text file print to STDOUT.
 *
 * @filename: The name of the file to read.
 * @letters: The maximum number of characters to read from the file.
 * Return: num_written- the number of characters , or 0 if an error occurred
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char *buffer;
ssize_t num_read, num_written;

if (filename == NULL)
return (0);

file = fopen(filename, "r");
if (file == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
fclose(file);
return (0);
}

num_read = fread(buffer, sizeof(char), letters, file);
if (num_read == -1)
{
free(buffer);
fclose(file);
return (0);
}

num_written = fwrite(buffer, sizeof(char), num_read, stdout);
if (num_written != num_read)
{
free(buffer);
fclose(file);
return (0);
}

free(buffer);
fclose(file);
return (num_written);
}
