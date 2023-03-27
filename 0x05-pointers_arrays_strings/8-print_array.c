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
for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%d", *(a + i));
}
else{
printf("%d, ", *(a + i));
}
}
printf("\n");
}
