#include "holberton.h"

/**
 * string_toupper - short description, single line
 * @letter: character
 * Return: void
 */


char *string_toupper(char *letter)
{
	int count = 0;

	while (letter[count] != '\0')
	{
		if (letter[count] >= 'a' && letter[count] <= 'z')
			letter[count] = letter[count] - ' ';
		count++;
	}

	return (letter);
}
