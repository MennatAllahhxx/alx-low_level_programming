#include "main.h"
/**
 * binary_to_uint - a fun
 * @b: op
 * Return: sth
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int num = 0, bb = 1;
if (b == NULL)
	return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '1' && b[i] != '0')
	return (0);
}
i--;
while (i >= 0)
{
if (b[i] == '1')
	num += bb;
bb *= 2;
i--;
}
return (num);
}
