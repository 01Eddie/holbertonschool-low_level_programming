#include "holberton.h"

/**
 * _strcpy - short description, single line
 * @dest: character
 * @src: character
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: dest + '\0'
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count))
	{
		dest[count] = src[count];
		count++;
	}


	return (dest + '\0');
}
