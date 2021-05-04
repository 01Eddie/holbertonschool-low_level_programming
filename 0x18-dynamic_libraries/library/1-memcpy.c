#include "../holberton.h"
/**
 * _memcpy- short description, single line
 * @dest: character
 * @src: character
 * @n: unsigned integer
 * Return: void
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *csrc = src;
	char *cdest = dest;

	for (; i < n; i++)
		cdest[i] = csrc[i];

	return (cdest);
}
