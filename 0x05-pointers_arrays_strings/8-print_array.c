#include "main.h"
#include <stdio.h>
/**
 * print_array - fun to print an array?
 * @a: first operand
 * @n: second operand
 * Return: nth
 */
void print_array(int *a, int n)
{
int i;
printf("%d", *a);
for (i = 1; i < n; i++)
{
printf(", %d", *(a + i));
}
printf("\n");
}
