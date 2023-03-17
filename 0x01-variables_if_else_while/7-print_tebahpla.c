#include <stdio.h>
/**
 * main - a program to print alphabet in reverse
 * Return: 0 (success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
