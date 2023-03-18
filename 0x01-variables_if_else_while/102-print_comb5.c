#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print possible combinations of 4 digits
 * Return: 0 (success)
 */
int main(void)
{
int p, q;
for (p = 0; p <= 98; p++)
{

for (q = p + 1; q<= 99; q++)
{
putchar('0' + (p / 10));
putchar('0' + (p % 10));
putchar(32);
putchar('0' + (q / 10));
putchar('0' + (q % 10));
if (p == 98 && q == 99)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
