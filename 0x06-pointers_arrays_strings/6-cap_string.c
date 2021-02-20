#include "holberton.h"

/**
 * cap_string - short description, single line
 * @s: character
 * Return: s
*/

char *cap_string(char *s)
{
	int count = 0;
	int count2;
	char cap[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (s[count] != '\0')
	{
		for (count2 = 0; count2 < 13; count2++)
		{
			if (s[count] == cap[count2])
			{
				if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
					s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
