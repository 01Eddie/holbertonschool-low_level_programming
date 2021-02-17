#include "holberton.h"

/**
 * rev_string - short description, single line
 * @s: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/

void rev_string(char *s)
{
	int count = 0, count2 = 0;
	int word;
	char arr[10000];

	while (s[count] != '\0')
	{
		arr[count] = s[count];
		count++;
	}

	word = count - 1;

	while (word >= 0)
	{
		s[word] = arr[count2];
		word--;
		count2++;
	}
}
