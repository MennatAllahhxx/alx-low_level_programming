#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - a code to print a text without using printf or puts
 * Return: 1 (completed)
 */
int main(void)
{
write(2,
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
