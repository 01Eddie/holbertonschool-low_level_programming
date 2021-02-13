#include <stdio.h>

/**
 * main- Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == '8' && j == '9')
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
