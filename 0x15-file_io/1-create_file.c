#include "holberton.h"
/**
 * create_file - check the code for Holberton School students.
 * @filename: Character
 * @text_content: Character
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr; /*wr: value of write*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);

	if (fd == -1)
	{
		return (-1);
		exit(1);
	}

	if (text_content == NULL)
		text_content = "";

	while (*text_content != '\0')
	{
		wr = write(fd, text_content, 1);
		text_content++;

		if (wr == -1)
		{
			return (-1);
			exit(1);
		}
	}

	close(fd);
	return (1);
}
