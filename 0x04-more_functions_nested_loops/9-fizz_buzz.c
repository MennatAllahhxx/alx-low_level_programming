#include <stdio.h>
/**
 * main - a fizz-buzz program
 * Return: 0 if success
 */
int main(void)
{
int i;
for (i = 1; i < 100; i++)
{
if (((i % 3) == 0) && ((i % 5) == 0))
	printf("FizzBuzz");
else if ((i % 5) == 0)
	printf("Buzz");
else if ((i % 3) == 0)
	printf("Fizz");
else
	printf("%d", i);
printf(" ");
}
if (i == 100)
	printf("Buzz");
printf("\n");
return (0);
}
