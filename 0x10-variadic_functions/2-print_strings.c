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
va_start(x, n);
i = n;
while (i--)
{
y = va_arg(x, char*);
if (y == NULL)
{
y = "(nil)";
}
if (separator != NULL)
{
printf("%s%s", y, i ? separator : "\n");
}
else
{
printf("%s", y);
if (!i)
{
printf("\n");
}
}
}
va_end(x);
}
