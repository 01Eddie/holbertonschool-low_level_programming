#include "holberton.h"

/**
 * puts2 - short description, single line
 * @str: pointer to string
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}

		count++;

	}
	_putchar('\n');
}
