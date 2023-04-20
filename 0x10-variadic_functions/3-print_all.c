#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list x;
int i = 0;
char *y;
va_start(x, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(x, int));
break;
case 'i':
printf("%d", va_arg(x, int));
break;
case 'f':
printf("%f", va_arg(x, double));
break;
case 's':
y = va_arg(x, char *);
if (y == NULL)
	y = "(nil)";
printf("%s", y);
break;
default:
i++;
continue;
}
if (format[i + 1])
	printf(", ");
i++;
}
printf("\n");
va_end(x);
}
