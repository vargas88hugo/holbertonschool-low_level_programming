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
	int fd, bt, cl;
	char buff[BUFFER];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/* read */
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[0]);
		exit(98);
	}
	bt = read(fd, buff, BUFFER);
	buff[bt] = '\0';
	cl = close(fd);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", bt), exit(100);
	/* write */
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
	while (BUFFER == 1024)
	{
		write(fd, buff, bt);
	}
	cl = close(fd);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", bt), exit(100);

	return (0);
}
