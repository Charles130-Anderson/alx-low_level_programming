#include "main.h"

/**
 * create_file - Create a file and write text content to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the string to write to the file.
 *
 * Return: On success, 1.
 *         On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written, len = 0;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Calculate the length of text_content */
if (text_content != NULL)
{
len = strlen(text_content);
}

/* Open the file with write-only permissions, create if it doesn't exist, and truncate if it exists */
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

/* Write text_content to the file */
if (text_content != NULL)
{
bytes_written = write(fd, text_content, len);
if (bytes_written != len)
{
close(fd);
return (-1);
}
}

/* Set file permissions to rw------- */
if (fchmod(fd, S_IRUSR | S_IWUSR) == -1)
{
close(fd);
return (-1);
}

/* Close the file descriptor */
close(fd);

return (1);
}
