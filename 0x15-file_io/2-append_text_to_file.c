#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the string to append to the file.
 *
 * Return: On success, 1.
 *         On failure, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, bytes_written, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
