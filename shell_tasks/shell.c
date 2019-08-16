#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
	char buff[1024];
	char *b = buff, *d = " ", *arg;
	char *args[] = { NULL, NULL }, *new[] = { NULL };
	char **tmp;
	size_t i = 1024;
	int status;

	tmp = args;

	args[1] = NULL;

	while (1)
	{
		if (fork() == 0)
		{
			printf("#cisfun$ ");
			getline(&b, &i, stdin);
			//arg = strtok(buff, d);
			for (i = 0; buff[i] != '\n'; i++)
				;
			buff[i] = '\0';
		        tmp[0] = buff;
			printf("%s", args[0]);
			execve(args[0], args, new);
		}
		wait(&status);
	}

	return (0);
}
