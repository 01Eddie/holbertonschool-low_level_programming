#include "holberton.h"
#include <stdlib.h>
int _strlen(char *s);

/**
 * str_concat - writes the character c to stdout
 * @s1: Character
 * @s2: Character
 * Return: NULL or str
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	char *str;

	if (s1 == NULL)
			s1 = "";
	if (s2 == NULL)
			s2 = "";

		str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (str == NULL)
		return (NULL);

	for (; i < _strlen(s1); i++)
		str[i] = s1[i];

	for (; j < _strlen(s2); i = i + 1, j++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
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

