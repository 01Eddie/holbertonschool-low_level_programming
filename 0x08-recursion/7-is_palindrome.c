#include "holberton.h"

/**
 * is_palindrome - function recursive
 * @s: Character pointer
 * Return: palindrome(s, 0, convert)
 */
int is_palindrome(char *s)
{
	int convert;

	convert = _strlen_recursion(s) - 1;

	return (palindrome(s, 0, convert));
}
/**
 * palindrome - functions recursive
 * @c: Character pointer
 * @i: Integer
 * @f: Integer
 * Return: 1, palindrome(c, i+1, f+1) or 0
*/
int palindrome(char *c, int i, int f)
{
	if (i >= f)
		return (1);

	return ((c[i] == c[f]) ? (palindrome(c, i + 1, f - 1)) : (0));
}
/**
 * _strlen_recursion - short description, single line
 * @s: description of parameter s
 * Return: length of s
*/
int _strlen_recursion(char *s)
{
	return ((*s != '\0') ? (_strlen_recursion(s + 1) + 1) : (0));
}
