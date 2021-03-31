#include "holberton.h"
#include <unistd.h>

/**
 * read_textfile - check the code for Holberton School students.
 * @filename: Character
 * @letters: Size_t
 * Return: 0 or countLetter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int wr, fd;
	char *buff;
	size_t countLetter = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 2);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	wr = read(fd, buff, letters);

	for (; countLetter <= letters && buff[countLetter] != '\0'; countLetter++)
	{
		wr = _putchar(buff[countLetter]);

		if (wr == -1)
		{
			return (0);
			exit(1);
		}
	}

	free(buff);
	close(fd);

	return (countLetter);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
