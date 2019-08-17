#include "holberton.h"

extern char **environ;

int main(int argc, char **argv, char **env)
{
	unsigned int i;

	printf("Address of **env: %p\n", &env);
	printf("Address of **environ: %p\n", &environ);
}
