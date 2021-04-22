#include <stdio.h>

/**
 * main - function main
 * @void: void
 * Return: 0
 */

int main(void)
{
	int u, d, c;

	for (c = 48; c <= 57; c++)
	{
		for (d = c + 1; d <= 57; d++)
		{
			for (u = d + 1; u <= 57; u++)
			{
				putchar(c);
				putchar(d);
				putchar(u);

				if (c == 55 && d == 56 && u == 57)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
