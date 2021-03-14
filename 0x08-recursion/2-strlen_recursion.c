#include "holberton.h"

/**
 * _strlen_recursion - recursion function.
 * @s: Pointer of Character
 * Return: (_strlen_recursion(s+1)+1) or (0).
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}

}
