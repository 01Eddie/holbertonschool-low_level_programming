#include "holberton.h"
/**
 * wildcmp - function recursive
 * @s1: Character pointer
 * @s2: Character pointer
 * Return: 0, 1 or wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
	return (0);
}
