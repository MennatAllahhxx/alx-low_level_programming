#include "main.h"
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
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd1 = open(argv[1], O_RDONLY);
byrd = read(fd1, buf, 1024);
if (fd1 == -1 || byrd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
while (byrd > 0)
{
bywr = write(fd2, buf, byrd);
if (fd2 == -1 || bywr  == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (close(fd1) || close(fd2) == -1)
{
if (close(fd1) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
if (close(fd2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
exit(100);
}
return (0);
}
