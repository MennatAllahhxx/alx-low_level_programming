#include "main.h"
/**
 * _strstr - a fun
 * @haystack: operand
 * @needle: operand
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
int s, r, t;
for (s = 0; haystack[s]; s++)
{
for (r = s, t = 0; needle[t] && (needle[t] == haystack[r]); r++, t++)
{
}
if (needle[t] == '\0')
return (&haystack[s]);
}
return (0);
}
