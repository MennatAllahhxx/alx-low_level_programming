#include "main.h"
/**
 * reverse_array - a fun to print reverse
 * @a: array
 * @n: no of elements
 * Return: nth
 */
void reverse_array(int *a, int n)
{
int i;
int m;
for (i = 0; i < (n / 2); i++)
{
m = a[i];
a[i] = a[(n - i - 1)];
a[(n - i - 1)] = m;
}
}
