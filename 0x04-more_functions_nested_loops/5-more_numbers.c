#include "main.h"
/**
 * more_numbers - a fun to print more numbers
 * Return: nth
 */
void more_numbers(void)
{
int i = 0, j = 0;
while (j < 10)
{
while (i < 15)
{
if (i > 10)
	_putchar(49);
_putchar((i % 10) + '0');
i++;
}
j++;
}
_putchar('\n');
}
