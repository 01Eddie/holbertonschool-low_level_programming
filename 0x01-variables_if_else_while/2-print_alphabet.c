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
	int n = 26;
	char letter = 'a';

	/* your code goes there */
	do {
	putchar(letter);
	letter++;
	n--;
	} while (n != 0);
	putchar('\n');
	return (0);
}
