#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - a fun
 * @a: 1st op
 * @b: 2nd op
 * Return: result
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - a fun
 * @a: 1st op
 * @b: 2nd op
 * Return: result
 */
int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - a fun
 * @a: 1st op
 * @b: 2nd op
 * Return: result
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - a fun
 * @a: 1st op
 * @b: 2nd op
 * Return: result
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - a fun
 * @a: 1st op
 * @b: 2nd op
 * Return: result
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
