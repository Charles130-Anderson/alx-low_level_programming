#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void copy_file(const char *src_file, const char *dest_file);
/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, or exit with an error code
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

copy_file(argv[1], argv[2]);

return (0);
}
/**
 * copy_file - Copy the contents of one file to another file
 * @src_file: Source file path
 * @dest_file: Destination file path
 */
void copy_file(const char *src_file, const char *dest_file)
{
int src_fd, dest_fd;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

src_fd = open(src_file, O_RDONLY);
if (src_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
exit(98);
}

dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (dest_fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}

while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(dest_fd, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
exit(98);
}

if (close(src_fd) == -1 || close(dest_fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
exit(100);
}
}
