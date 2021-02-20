#include "holberton.h"

/**
 * string_toupper - short description, single line
<<<<<<< HEAD
 * @*: character
=======
 * @letter: character
>>>>>>> a4ffc2f9220c97c4dafef63d8f35d29e6401342e
 * Return: void
 */


char *string_toupper(char *letter)
{
	int count = 0;
<<<<<<< HEAD
	while(letter[count] != '\0')
	{
		if(letter[count] >= 'a' && letter[count] <= 'z')
			letter[count] = letter[count] - 32;
		count++;
	}
	return letter;
=======

	while (letter[count] != '\0')
	{
		if (letter[count] >= 'a' && letter[count] <= 'z')
			letter[count] = letter[count] - ' ';
		count++;
	}

	return (letter);
>>>>>>> a4ffc2f9220c97c4dafef63d8f35d29e6401342e
}
