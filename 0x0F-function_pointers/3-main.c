#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entery point
 * @argc: counts
 * @argv: var
 * Return: result
 */
int main(int argc, char **argv)
{
int i;
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
f = get_op_func(argv[2]);
if (f == NULL)
{
printf("Error\n");
exit(99);
}
i = f(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", i);
return (0);
}
