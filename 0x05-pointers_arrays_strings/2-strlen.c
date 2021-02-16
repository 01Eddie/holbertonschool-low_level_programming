#include "holberton.h"
#include <string.h>
/**
 * _strlen - short description, single line
 * @s: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/

int _strlen(char *s)
{
	int count;

	while (s[count] != '\n')
		count++;

	return (s[count]);

}
