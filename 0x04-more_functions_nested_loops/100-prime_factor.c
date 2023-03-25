#include <stdio.h>
/**
 * main - program to print prime factor
 * Return: (0) success
 */
int main(void)
{
unsigned long int i, num = 612852475143;
for (i = 3; i < 782849; i = i + 2)
{
if (num % i == 0)
{
if (num != i)
{
num = num / i;
}
}
}
printf("%lu\n", num);
return (0);
}
