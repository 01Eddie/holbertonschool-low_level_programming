#include "../holberton.h"
/**
 * _strspn - function strspn
 * @s: character
 * @accept: character
 * Return: i
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (i);
	}
	return (i);
}
