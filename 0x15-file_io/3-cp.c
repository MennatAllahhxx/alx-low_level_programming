#include "main.h"
/**
 * err - a fun
 * @errtype: op
 * Return: sth
 */
int err(int errtype)
{
close(fd1);
close(fd2);
if (errtype == 97)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
else if (errtype == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
else if (errtype == 99)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
else
{
if (close(fd1) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
if (close(fd2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
}

/**
 * main - a fun
 * @argv: op
 * @argc: op
 * Return: sth
 */
int main(int argc, char **argv)
{
char buf[1024];
int fd1, fd2;
int byrd, bywr;
if (argc != 3)
	err(97);
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
	err(98);
byrd = read(fd1, buf, 1024);
if (byrd == -1)
	err(98);
fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd2 == -1)
	err(99);
while (byrd > 0)
{
bywr = write(fd2, buf, byrd);
if (bywr  == -1 || byrd != bywr)
	err(99);
byrd = read(fd1, buf, 1024);
if (byrd == -1)
	err(98);
}
if (close(fd1) || close(fd2) == -1)
	err(100);
return (0);
}
