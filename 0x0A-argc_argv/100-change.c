#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entery point
 * @argc: operator
 * @argv: operator
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
int coins = 0, i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
if (i >=  25)
{
coins = (i / 25) + coins;
i = i % 25;
}
if (i >= 10)
{
coins = (i / 10) + coins;
i = i % 10;
}
if (i >= 5)
{
coins = (i / 5) + coins;
i = i % 5;
}
if (i >= 2)
{
coins = (i / 2) + coins;
i = i % 2;
}
coins = i + coins;
if (atoi(argv[1]) > 0)
	printf("%d\n", coins);
else
	printf("%d\n", 0);
return (0);
}
