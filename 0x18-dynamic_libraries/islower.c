#include "main.h"
/**
 * _islower - a function to return 1 if c
 * @c: a parameter
 * Return: 1 if lowercase. 0 otherwise.
 */
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
