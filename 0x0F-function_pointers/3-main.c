#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: integer
 * @argv: character
 * Return: void.
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	int (*sign)(int, int);

/*if the number of arguments is wrong, print Error, followed by a new line,*/
/*and exit with the status 98*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
/*if the operator is none of the above, print Error, followed by a new*/
/*line, and exit with the status 99*/
	sign = get_op_func(argv[2]);

	if (sign == NULL)
	{
		printf("Error\n");
		exit(99);
	}

/*if the user tries to divide (/ or %) by 0, print Error, followed by a new*/
/*line, and exit with the status 100*/
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", sign(num1, num2));
	return (0);
}
