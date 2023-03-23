#include <stdio.h>
/**
 * main - program to print prime factor
 * Return: (0) success
 */
int main(void)
{
unsigned long int i, j, s, Prime_num;
for (i = 2; i <= 612852475143; i++)
{
if (612852475143 % i == 0)
{
Prime_num = 1;
for (j = 2; j <= (i / 2); j++)
{
if (i % j == 0)
{
Prime_num = 0;
break;
}
}
if (Prime_num == 1)
{
s = i;
}
}
}
printf("%lu\n", s);
return (0);
}
