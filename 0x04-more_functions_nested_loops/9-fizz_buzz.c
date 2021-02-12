#include <stdio.h>

/**
 * print_square - short description, single line
 * @size: description of parameter a
(* a blank line
 * description: longer description of the function)?
(* section header: section description)*
 * return: void
*/

int main(void)
{
	int i;
	for(i = 1; i <= 100; i++)
	{
		if(i%3 == 0)
		{
			printf("Fizz ");
		}
		else if(i%5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
