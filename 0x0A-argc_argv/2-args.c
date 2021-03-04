#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: Integer
 * @argv: Character
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
