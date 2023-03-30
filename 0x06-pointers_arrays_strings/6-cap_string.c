#include "main.h"
/**
 * *cap_string - fun to convert
 * @s: string
 * Return: result
 */
char *cap_string(char *s)
{
int i = 0, j;
if (s[0] >= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}
while (s[i] != '\0')
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == ',' || s[i] == ';' || s[i] == '.'
		|| s[i] == '!' || s[i] == '?' || s[i] == '"'
		|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
j = i + 1;
if (s[j] >= 'a' && s[j] <= 'z')
{
s[j] = s[j] - 32;
}
}
i++;
}
return (s);
}
