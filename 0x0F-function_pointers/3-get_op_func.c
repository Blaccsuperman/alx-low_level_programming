#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - pointer to func
 * @s: pointe char for selection
 * @op_t ops[] : array of functions/operators
 *
 * Return: selected operator
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

	if (s == NULL)
		return (NULL);
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
