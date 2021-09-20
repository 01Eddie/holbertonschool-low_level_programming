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
	int n;
	int nC;

	/* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	for (nC = 'A'; nC <= 'Z'; nC++)
		putchar(nC);

	putchar('\n');
	return (0);
}

