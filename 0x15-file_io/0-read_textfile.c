#include "holberton.h"
/**
 * read_textfile - check the code for Holberton School students.
 * @filename: Character
 * @letters: Size_t
 * Return: 0 or countLetter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int nb, fd;/*nb: number of bytes*/
	char *buffer;
	/* size_t countLetter = 0;  */

	if (filename == NULL)
		return (0);

	if (letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	nb = read(fd, buffer, letters);

	/*while (countLetter <= letters && buffer[countLetter] != '\0')*/
	/*{*/
/*		nb = _putchar(buffer[countLetter]);*/
/*		countLetter++;*/

		if (nb == -1)
		{
			close(fd);
			return (0);
		}
/*	}*/
		write(STDOUT_FILENO, buffer, nb);

	free(buffer);
	close(fd);

	return (nb);
}
