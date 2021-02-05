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
	int n = 0;

	/* your code goes there */
	do {
	putchar('0' + n);
	n++;

	if (n <= 9)
	{
		putchar(',');
		putchar(' ');
	}

	} while (n != 10);

	putchar('\n');

	return (0);
}
