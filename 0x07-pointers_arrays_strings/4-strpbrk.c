#include "holberton.h"

/**
 * _strpbrk - function strpbrk
 * @s: character
 * @accept: character
 * Return: s or '\0'
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a++ == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
