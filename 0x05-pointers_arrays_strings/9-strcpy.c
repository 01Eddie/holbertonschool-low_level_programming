#include "holberton.h"

/**
 * _strcpy - short description, single line
 * @dest: character
 * @src: character
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
