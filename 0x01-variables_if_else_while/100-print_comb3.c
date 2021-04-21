#include <stdio.h>

/**
 * main- Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == 56 && j == 57)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
			}
			else if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
