#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a fun
 * @separator: 1st para
 * @n: 2nd para
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list x;
if (n == 0)
	return;
va_start(x, n);
i = n;
while (i--)
{
	if (separator != NULL)
		printf("%d%s", va_arg(x, int), i ? separator : "\n");
	else
	{
		printf("%d", va_arg(x, int));
		if (~ i)
			printf("\n");
	}
}
va_end(x);
}
