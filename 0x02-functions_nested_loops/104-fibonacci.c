#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	unsigned int count, count1;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;

	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (count = 3; count <= 89; count++)
	{
		printf("%lu, ", c);
		a = b;
		b = c;
		c = a + b;
	}

	int a1, a2, b1, b2, c1, c2;

	b1 = b / 1000000000;
	b2 = b % 1000000000;
	c1 = b / 1000000000;
	c2 = b % 1000000000;

	for (count1 = 89; count1 < 98; count1++)
	{
		printf("%lu%lu, ", c1, c2);
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
		c1 = a1 + b1 + ((a2 + b2) / 1000000000);
		c2 = (a2 + b2) % 1000000000;
	}

	printf("%lu%lu\n", c1, c2);

	return (0);
}
