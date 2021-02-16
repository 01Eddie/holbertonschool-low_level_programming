#include "holberton.h"

/**
 * _puts - short description, single line
 * @str: description of parameter s
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * Return: void
*/

void _puts(char *str)
{
	int count = 0;
    
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
        
	_putchar('\n');
        
}
