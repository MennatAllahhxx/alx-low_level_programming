#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - entry point
 * @argc: count
 * @argv: var
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
char *ptr = (char *)main;
int i;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
if (atoi(argv[1]) < 0)
{
printf("Error\n");
exit(2);
}
i = atoi(argv[1]);
while (i--)
{
printf("%02hhx%s", *ptr++, i ? " " : "\n");
}
return (0);
}
