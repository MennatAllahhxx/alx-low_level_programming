#include "main.h"
/**
 * _isupper - a function to check for uppercase char
 * @c: char to be checked
 * Return: 1 is uppercase char. 0 otherwise
 */
int _isupper(int c)
{
if (c <= 'Z' && c >= 'A')
	return (1);
else
	return (0);
}
