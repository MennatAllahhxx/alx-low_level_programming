#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a fun
 * @a: array
 * @size: duhhhh
 * Return: nth
 */
void print_diagsums(int *a, int size)
{
int m = 0, n = 0, i;
for (i = 0; i < size; i++)
{
m = a[i * size + i] + m;
n = a[i * size + (size - i - 1)] + n;
}
printf("%d, %d\n", m, n);
}
