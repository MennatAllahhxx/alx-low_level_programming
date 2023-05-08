#include "main.h"
/**
 * create_file - a fun
 * @filename: op
 * @text_content: op
 * Return: sth
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int bywr;
if (!filename)
	return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fd == -1)
	return (-1);
if (!text_content)
{
close(fd);
return (1)
}
bywr = write(fd, text_content, sizeof(text_content) - 2);
if (bywr == -1)
	return (-1);
close(fd);
return (1);
}
