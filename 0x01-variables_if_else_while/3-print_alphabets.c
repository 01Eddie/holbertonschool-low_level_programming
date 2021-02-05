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
	int nC = 26;
	char letter = 'a';
	char letterC = 'A';

        /* your code goes there */
	do {
	putchar(letter);
	letter++;
	n--;
	} while (n != 0);
	
	do {
        putchar(letterC);
        letterC++;
        nC--;
        } while (nC != 0);

	putchar('\n');
	return (0);
}

