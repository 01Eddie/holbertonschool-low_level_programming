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
	int digit3 = 0;
	int digit4 = 0;

	/* your code goes there */
	for (int x = 0; x <= 99; x++)
	{
		for (int y = 0; y <= 99; y++)
		{
			digit1 = (x / 10);
			digit2 = (x % 10);
			digit3 = (y / 10);
			digit4 = (y % 10);

			if ((digit1 == digit3 && digit2 < digit4) || digit1 < digit3)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(' ');
				putchar(digit3 + '0');
				putchar(digit4 + '0');
				if (digit1 != 9 || digit2 != 8 || digit3 != 9 || digit4 != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

