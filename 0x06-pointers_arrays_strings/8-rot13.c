#include "holberton.h"

/**
 * leet - short description, single line
 * @s: character
 * Return: s
*/

char *rot13(char *s)
{
	char letter[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[52] = "nopqrstuvwcyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len = 52;
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
