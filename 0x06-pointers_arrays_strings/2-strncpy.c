#include "main.h"
/**
 * *_strncpy - a fun to copy string
 * @dest: destination
 * @src: source
 * @n: sth
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (n != 0)
{
dest[i] = src[i];
i++;
n--;
}
while (dest[i] != '\0')
{
dest[i] = dest[i];
i++;
}
dest[i] = '\0';
return (dest);
}
