#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	unsigned int count;
	unsigned long int a = 1;
	unsigned long int b = 1;
	unsigned long int c;

	printf("%lu, ", a);

	for (count = 0; count <= 96; count++)
	{
		c = a + b;
		a = b;
		b = c;

		if (count != 96)
			printf("%lu, ", b);
		else
			printf("%lu\n", b);
	}
	return (0);
}
