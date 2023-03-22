#include <stdio.h>
/**
 * main - program to print fibonacci series
 * Return: (0) success
 */
int main(void)
{
long c = 0, a = 1, b = 2;
unsigned long int s = 2;
while (c < 4000000)
{
c = a + b;
if (c % 2 == 0)
	s = s + c;
a = b;
b = c;
}
printf("%lu\n", s);
return (0);
}
