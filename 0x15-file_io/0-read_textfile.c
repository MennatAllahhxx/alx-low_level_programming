#include "main.h"
/**
 * read_textfile - a fun
 * @filename: op
 * @letters: op
 * Return: sth
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf = malloc(sizeof(char) * letters);
int fd;
int byrd = 0, bywr;
if (!buf)
	return (0);
if (!filename || !letters)
	return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);
byrd = read(fd, buf, letters);
if (byrd == -1)
{
free(buf);
return (0);
}
bywr = write(STDOUT_FILENO, buf, byrd);
if (bywr == -1 || bywr != byrd)
{
free(buf);
return (0);
}
close(fd);
free(buf);
return (byrd);
}
