#include "holberton.h"

int main(int argc, char **argv)
{
	struct stat st;
	int i;

	if (argc < 2)
	{
		printf("Usage: %s path_to_file ...\n", argv[0]);
		return (1);
	}

        stat(argv[1], &st);

	i = 1;
	while (argv[i])
	{
		printf("%s: ", argv[i]);
		if (st.st_mode & S_IFREG)
			printf("FOUND\n");
		else
			printf("NOT FOUND\n");
		i++;
	}

	return (0);
}
