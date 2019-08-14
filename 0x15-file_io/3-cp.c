#include "holberton.h"
#define BUFFER 1024

/**
 * main - program that copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Muldimensional array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int fd1, fd2, bt = 1;
	char buff[BUFFER];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bt => 0)
	{
		bt = read(fd1, buff, BUFFER);
		if (bt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (write(fd2, buff, bt) != bt)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	}
	return (0);
}
