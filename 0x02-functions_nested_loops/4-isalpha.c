#include "main.h"
/**
 * _isalpha - a function to return 1 if c
 * @c: a parameter
 * Return: 1 if alphabet. 0 otherwise.
 */
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
