#include "main.h"
/**
 * _abs - fun to return absolute of a number
 * @i: number to be checked
 * Return: return absolute of a no
 */
int _abs(int i)
{
int s;
if (i >= 0)
	s = i;
else
	s = i * (-1);
return (s);
}
