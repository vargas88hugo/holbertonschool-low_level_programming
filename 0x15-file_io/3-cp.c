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
	int fd1, fd2, bt1 = BUFFER, bt2, cl1, cl2;
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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while (bt1 > 0)
	{
		bt1 = read(fd1, buff, BUFFER);
		if (bt1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bt2 = write(fd2, buff, bt1);
		if (bt2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl1 = close(fd1), cl2 = close(fd2);
	if (cl1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);
	if (cl2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	return (0);
}
