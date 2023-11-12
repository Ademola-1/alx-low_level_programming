#include "main.h"

/**
 * main - copies the content of a fiel to another fle.
 * @argc:  number  of argument  passed to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int fd_rd, fd_wr, i, j, k;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_rd = open(argv[1], O_RDONLY);
	if (fd_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_wr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_rd, buff, BUFSIZ)) > 0)
	{
		if (fd_wr < 0 || write(fd_wr, buff, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_rd);
			exit(99);
		}
	}
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}
	j = close(fd_rd);
	k = close(fd_wr);
	if (j == -1 || k == -1)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Errir: Can't close fd %d\n", fd_rd);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_wr);
		exit(100);
	}
	return (0);
}
