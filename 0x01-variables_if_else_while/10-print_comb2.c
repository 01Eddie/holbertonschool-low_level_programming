#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Short description, single line
 * @void: Description of parameter x
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 0
 */
int main(void)
{
	int digit1 = 0;
	int digit2 = 0;

	/* your code goes there */
	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 57 || digit2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
