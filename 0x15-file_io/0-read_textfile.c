#include "holberton.h"
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
			close(fd);
			return (0);
		}
	}

	free(buff);
	close(fd);

	return (countLetter);
}
