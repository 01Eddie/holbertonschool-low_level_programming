#include "../holberton.h"
/**
 * _strlen - short description, single line
 * @s: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: length of s
*/

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);

}
