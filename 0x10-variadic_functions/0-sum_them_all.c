#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a fun
 * @n: no of args
 * Return: 0 if n = 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list x;
if (n == 0)
	return (0);
va_start(x, n);
for (i = 0; i < n; i++)
	sum = sum + va_arg(x, const unsigned int);
va_end(x);
return (sum);
}
