#include "holberton.h"

/**
 * _strchr- short description, single line
 * @s: character
 * @c: character
 * Return: void
*/

char *_strchr(char *s, char c)
{
	char *outS = s;
	char outC = c;

	for (; *outS != '\0'; outS++)
	{
		if (*outS == outC)
			return (outS);
	}

	return ('\0');
}
