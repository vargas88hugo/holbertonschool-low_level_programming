#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Function that select the correct function of the operation
 * @s: String of the operator
 * @a: First Number
 * @b: Second Number
 * Return: The result of the operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
		        break;
		i++;
	}

	return (ops[i].f);
}
