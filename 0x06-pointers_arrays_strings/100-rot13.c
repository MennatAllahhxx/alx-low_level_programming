#include "main.h"
/**
 * *rot13 - a fun to rotate by 13 places
 * @s: operand
 * Return: result
 */
char *rot13(char *s)
{
char ab[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char mn[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int j, i;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; ab[j] != '\0'; j++)
{
if (s[i] == ab[j])
{
s[i] = mn[j];
break;
}
}
}
return (s);
}
