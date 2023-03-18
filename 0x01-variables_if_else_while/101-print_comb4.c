#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program to print all possible combinations of 3 different digits
 * Return: 0 (success)
 */
int main(void)
{
int i = 0, j, k;
while (i < 10)
{
j = i + 1;
while (j < 10)
{
k = j + 1;
while (k < 10)
{
if (i != j && i != k && j != k)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if ((i != 7) || (j != 8) || (k != 9))
{
putchar(44);
putchar(32);
}
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
