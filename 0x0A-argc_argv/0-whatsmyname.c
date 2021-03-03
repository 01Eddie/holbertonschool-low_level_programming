#include <stdlib.h>
#include <stdio.h>

/**
 * main - writes the character c to stdout
 * @argc: int
 * @argv: Character
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
