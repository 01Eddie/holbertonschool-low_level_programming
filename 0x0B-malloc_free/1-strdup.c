#include "holberton.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strdup - writes the character c to stdout
 * @str: Character
 * Return: NULL or dest
 */

char *_strdup(char *str)
{
	char *dest = malloc(_strlen(str) + 1);

	if (str == NULL)
		return (NULL);

	if (dest == NULL)
		return (NULL);

	_strcpy(dest, str);

	return (dest);
}

/**
 * _strlen - short description, single line
 * @s: description of parameter s
 * Return: length of s
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}

/**
 * _strcpy - short description, single line
 * @dest: character
 * @src: character
 * Return: dest + '\0'
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';

	return (dest);
}
