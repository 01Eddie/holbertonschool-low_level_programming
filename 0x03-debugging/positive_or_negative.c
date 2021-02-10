#include "holberton.h"

/**
* positive_or_negative - tests function that prints if integer is positive or negative
* @a: parameter
* Return: no return
*/

void positive_or_negative(int i)
{

	
	if (i > 0)
		printf("%d is positive\n", i);

	else if (i == 0)
		printf("%d is zero\n", i);

	else
		printf("%d is negative\n", i);

return;
}
