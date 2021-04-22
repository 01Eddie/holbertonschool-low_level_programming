#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	unsigned int count;
	unsigned long int a = 1, b = 2, c = 3;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (count = 3; count < 50; count++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%lu, ", c);

		if (count == 49)
			printf("%lu\n", c);
	}
	return (0);
}
