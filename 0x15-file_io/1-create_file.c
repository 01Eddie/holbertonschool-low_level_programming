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
	int count = 0; /*count: counts of bytes*/

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
		exit(1);
	}

	if (text_content == NULL)
		text_content = "";

	else
	{
		while (text_content[count] != '\0')
			count++;
	}

	wr = write(fd, text_content, count);

	if (wr == -1)
	{
		return (-1);
		exit(1);
	}

	close(fd);
	return (1);
}
