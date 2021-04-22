#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	unsigned long int count, a = 1, b = 0, c, sum = 0;

	for (count = 0; count <= 4000000; count++)
	{
		c = a + b;
		a = b;
		b = c;

		if (b % 2 == 0 && b <= 4000000)
			sum = sum + b;
	}

	printf("%lu\n", sum);
	return (0);
}
