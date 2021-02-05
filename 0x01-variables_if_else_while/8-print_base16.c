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
	int nC = 0;
	char letter = 'a';

	/* your code goes there */
	do {
	putchar('0' + nC);
	nC++;
	} while (nC != 10);

	do {
	putchar(letter);
	letter++;
	n++;
	} while (n != 6);

	putchar('\n');

	return (0);
}
