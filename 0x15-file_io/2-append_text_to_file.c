#include "main.h"
/**
 * append_text_to_file - a fun
 * @filename: op
 * @text_content: op
 * Return: sth
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int bywr;
if (!filename)
	return (-1);
fd = open(filename, O_APPEND);
if (fd == -1)
	return (-1);
if (!text_content)
{
close(fd);
return (1);
}
bywr = write(fd, text_content, strlen(text_content));
if (bywr == -1)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
