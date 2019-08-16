#include<stdio.h>      // printf()
#include<stdlib.h>     // exit()
#include<sys/types.h>  // pid_t
#include<sys/wait.h>   // wait()
#include<unistd.h>     // fork

int main(void)
{
	char *args[] = {"/bin/ls", "-l", "/tmp", NULL};
	char *new[] = { NULL };
	int status, i;

	for (i = 0; i < 5; i++)
	{
		if (fork() == 0)
		{
			execve(args[0], args, new);
		}
		wait(&status);
	}
}
