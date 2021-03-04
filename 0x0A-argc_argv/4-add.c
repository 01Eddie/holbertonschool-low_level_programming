#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - writes the character c to stdout
 * @argc: Integer
 * @argv: Character
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int count1, count2;
	int add = 0;

	for (count1 = 1; count1 < argc; count1++)
	{
		for (count2 = 0; argv[count1][count2] != '\0'; count2++)
		{
			if (!isdigit(argv[count1][count2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[count1]);
	}

	printf("%d\n", add);
	return (0);
}
