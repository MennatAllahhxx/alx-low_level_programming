#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_fun - a pointer
 * @s: op
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
 op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
int i;
i = 0;
while(ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
	break;
i++;
}
return (ops[i].f);
}
