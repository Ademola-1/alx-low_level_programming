#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: the name of the file to be read.
 * @letters: the number of letter it should read and print.
 * Return: the number of letters printed, or 0 if it failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fcount = 0, freaded = -1;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	freaded = read(fd, buff, letters);
	if (freaded < 0)
		return (0);
	buff[freaded] = '\0';
	fcount += freaded;

	write(STDOUT_FILENO, buff, freaded);

	close(fd);
	return (fcount);
}
