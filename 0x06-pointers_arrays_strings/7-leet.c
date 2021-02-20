#include "holberton.h"

/**
 * leet - short description, single line
 * @s: character
 * Return: s
*/

char *leet(char *s)
{
	char vocal[5] = "aeotl";
	char number[5] = "43071";
	int len = 5;
	int i = 0;
	int j;
		while (s[i] = '\0')
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == vocal[j] || s[i] == vocal[j] - 32)
				s[i] = number[j];
		}
		i++;
	}

	return (s);
}
