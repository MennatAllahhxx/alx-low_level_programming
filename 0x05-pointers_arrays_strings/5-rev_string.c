#include "main.h"
/**
 * rev_string - a fun to print reverse
 * @s: string to be printed
 * Return: nth
 */
void rev_string(char *s)
{
int i, k;
char m;
for (i = 0; s[i] != '\0'; i++)
{
}
i--;
for (k = i; k > (i / 2); k--)
{
m = s[k];
s[k] = s[(i - k)];
s[(i - k)] = m;
}
}
