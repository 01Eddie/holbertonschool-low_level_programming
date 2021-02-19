#include "holberton.h"

/**
 * _strncat - short description, single line
 * @dest: character
 * @src: character
 * @n: integer
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (dest[count] != '\0')
		count++;

	while (n > 0 && src[count2] != '\n')
	{
		dest[count] = src[count2];
		n--;
		count++;
		count2++;
	}

	return (dest);
}
