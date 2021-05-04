#include "../holberton.h"
/**
 * _strstr - function strstr
 * @haystack: character
 * @needle: character
 * Return: (haystack - len) or '\0'
*/

char *_strstr(char *haystack, char *needle)
{
	int len = _strlen(needle);
	char *ref = needle;

	while (*haystack && *ref)
	{
		if (*haystack++ == *ref)
		{
			ref++;
		}
		if (!*ref)
		{
			return (haystack - len);
		}
		if (len == (ref - needle))
		{
			ref = needle;
		}
	}

	return ('\0');
}