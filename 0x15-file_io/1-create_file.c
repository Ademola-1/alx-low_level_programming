#include "main.h"

/**
 * create_file - creates file and fills it with text.
 * @filename: name of the file to create'.
 * @text_content: the content to write inside the file,
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i, j = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fd, text_content, j);
		if (i != j)
			return (-1);
	}

	close(fd);

	return (1);
}
