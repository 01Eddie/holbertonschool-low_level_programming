#include "holberton.h"
/**
 * append_text_to_file - check the code for Holberton School students.
 * @filename: Character
 * @text_content: Character
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0664);

	if (fd == -1)
	{
		return (-1);
		exit(1);
	}

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
	}
	else
		text_content = "";

	write(fd, text_content, count);

	if (write(fd, text_content, count) == -1)
	{
		return (-1);
		exit(1);
	}

	close(fd);
	return (1);
}
