#include <stdio.h>
/**
 * main - program to print fibonacci series
 * Return: (0) success
 */
int main(void)
{
int i = 0, c = 0, a = 1, b= 2;
printf("%d, %d", a, b);
while(i < 48)
{
c = a + b;
printf(" ,%d", c);
a = b;
b = c;
i++;
}
return (0);
}
