#include <stdio.h>

/**
 * main - Short description, single line
 * @void: Description of parameter x
 * Return: 0
 */
int main(void)
{
	int count, a = 0, b = 1, c;

	for (count = 0; count <= 48; count++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%i, ", c);

		if (count == 48)
			printf("%i \n", c);
	}
	return (0);
}
