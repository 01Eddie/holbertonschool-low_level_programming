#include <stdio.h>

/**
 * main - print Fizz Buzz of numbers 3 and 5
 * @void: description of parameter a
(* a blank line
 * description: main of numbers
(* section header: section description)*
 * return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");

}
