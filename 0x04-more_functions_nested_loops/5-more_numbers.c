#include "main.h"
/**
 * more_numbers - a fun to print more numbers
 * Return: nth
 */
void more_numbers(void)
{
int i = 0, j = 0, s;
while (j < 10)
{
while (i < 15)
{
if (i < 10)
	s = i;
else
	s = i % 10;
if (i > 9)
	_putchar(49);
_putchar(s + '0');
i++;
}
j++;
}
_putchar('\n');
}
