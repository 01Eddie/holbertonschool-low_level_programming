#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
 * string_nconcat - writes the character c to stdout
 * @s1: Character
 * @s2: Character
 * @n: Integer
 * Return: x or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int count1, count2, s10, s20;

	s10 = _strlen(s1);
	s20 = _strlen(s2);

	/*if NULL is passed, treat it as an empty string. */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (s20 <= n)
		n = s20;

	x = malloc(sizeof(char) * s10 + n + 1);

	/*If the function fails, it should return NULL*/
	if (x == NULL)
		return (NULL);

/*The returned pointer shall point to a newly allocated space in memory*/
/*, which contains s1, followed by the first n bytes of s2, and null*/
/*terminated*/
	for (count1 = 0; count1 < s10; count1++)
		x[count1] = s1[count1];

	for (count2 = 0; count2 < n; count1++, count2++)
		x[count1] = s2[count2];

	x[count1] = '\0';

	return (x);
}
/**
 * _strlen - writes the character c to stdout
 * @s: Character
 * Return: count(length of s)
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	return (count);
}
