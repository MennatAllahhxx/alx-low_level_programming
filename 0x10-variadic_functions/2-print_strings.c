#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a fun
 * @separator: 1st para
 * @n: 2nd para
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *y;
va_list x;
if (n == 0)
	return;
va_start(x, n);
i = n;
if (separator == NULL)
	separator = "";
while (i--)
{
	y = va_arg(x, char*);
	if (y == NULL)
		y = "(nil)";
	printf("%s%s", y, i ? separator : "\n");
}
}
