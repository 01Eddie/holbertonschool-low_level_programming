#include "../holberton.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: Character string pointer
 *
 * Return: number * N
 */
int _atoi(char *s)
{
	int count1 = 0, n = -1, number = 0, isNum = 0;

	while (s[count1] != '\0')
	{
		if (s[count1] == '-')
			n = -n;
		if (s[count1] >= '0' && s[count1] <= '9')
		{
			number = (number * 10) - (s[count1] - '0');
			isNum = 1;
		}
		else if (isNum == 1)
			break;
		count1++;
	}
	return (number * n);
}
