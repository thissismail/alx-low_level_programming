#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects correct operation function
 * @s: operation given
 *
 * Return: pointer to correct opperation
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return(ops[i].f);
		i++;
	}

	return (NULL);
}
