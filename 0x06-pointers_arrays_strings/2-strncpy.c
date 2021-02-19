#include "holberton.h"

/**
 * _strncat - short description, single line
 * @dest: character
 * @src: character
 * @n: integer
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	count = count;
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return dest;	
}
