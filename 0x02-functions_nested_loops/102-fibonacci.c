#include <stdio.h>
/**
 * main - program to print fibonacci series
 * Return: (0) success
 */
int main(void)
{
long c = 0, a = 1, b = 2;
int i;
printf("%ld, %ld", a, b);
while (i < 48)
{
c = a + b;
printf(", %ld", c);
a = b;
b = c;
i++;
}
return (0);
}
