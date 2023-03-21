#include "main.h"
#include <stdio.h>
/**
 * main - to print addition
 * Return: (0) success
 */
int main(void)
{
int i, s = 0;
for (i = 0; i < 1024; i++)
{
if (((i % 5) == 0) || ((i % 3) == 0))
{
s = s +  i;
}
}
printf("%d\n", s);
return (0);
}
