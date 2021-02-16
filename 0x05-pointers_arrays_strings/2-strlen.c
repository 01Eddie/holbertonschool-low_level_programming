#include "holberton.h"

/**
 * _strlen - short description, single line
 * @s: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: count 
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return count;

}
