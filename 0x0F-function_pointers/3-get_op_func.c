#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: The character to print
 * Return: NULL or ops[i].f.
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
/*where s is the operator passed as argument to the program*/
	while (ops[i].op != NULL)
	{
/*This function returns a pointer to the function that corresponds to the*/
/*operator given as a parameter. Example: get_op_func("+") should return a*/
/*pointer to the function op_add*/
		if (*ops[i].op == *s && s[1] == '\0')
			return (ops[i].f);

		i++;
	}
/*If s does not match any of the 5 expected operators (+, -, *, /, %),*/
/*return NULL*/
	return (NULL);
}
