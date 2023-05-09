#include "main.h"
/**
 * err - a fun
 * @errtype: op
 * @fd1: op
 * @fd2: op
 * @file1: op
 * @file2: op
 * Return: sth
 */
int err(int errtype, char *file)
{
if (errtype == 98)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
else
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}
return (0);
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
int x = 0, y = 0;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(argv[1], O_RDONLY);
if (fd1 == -1)
	err(98, argv[1]);
byrd = read(fd1, buf, 1024);
if (byrd == -1)
	err(98, argv[1]);
fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd2 == -1)
	err(99, argv[2]);
while (byrd > 0)
{
bywr = write(fd2, buf, byrd);
if (bywr  == -1 || byrd != bywr)
	err(99, argv[2]);
byrd = read(fd1, buf, 1024);
if (byrd == -1)
	err(98, argv[1]);
}
x = close(fd1);
y = close(fd2);
if (x == -1 || y == -1)
{
if (x == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
if (y == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}
