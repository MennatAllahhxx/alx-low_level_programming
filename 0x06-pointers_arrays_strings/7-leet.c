#include "main.h"
/**
 * *leet - fun
 * @s: string to return
 * Return: string
 */
char *leet(char *s)
{
char ab[] = "aeotl";
char cd[] = "AEOTL";
char ef[] = "43071";
int j, i;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ab[j] != '\0' && cd[j] != '\0'; j++)
{
if (s[i] == ab[j] || s[i] == cd[j])
{
s[i] = ef[j];
}
}
}
return (s);
}
