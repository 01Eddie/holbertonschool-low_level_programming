#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	unsigned int count;
	unsigned long int a = 1, b = 1, c;

	printf("%lu, ", a);

	for (count = 0; count <= 48; count++)
	{
		c = a + b;
		a = b;
		b = c;

		if (count != 48)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
