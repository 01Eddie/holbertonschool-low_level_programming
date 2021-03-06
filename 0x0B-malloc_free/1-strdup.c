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
	/*Space for length plus null*/
	char *dest = malloc(_strlen(str) + 1);
	/*No memory*/
	if (str == NULL)
		return (NULL);
	/*No memory*/
	if (dest == NULL)
		return (NULL);
	/*copy of characters*/
	_strcpy(dest, str);
	/*return the news characters*/
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
