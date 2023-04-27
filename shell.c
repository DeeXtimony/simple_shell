<<<<<<< HEAD
#include <stdio.h>

/**
 * print_num - prints number 0 - 10
 */

void print_num(void)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%d.\n", i);
	printf("%d\n", i); }

/**
 * main - Runs the program
 * Return: Always 0.
 */
int main(void)
{
	print_num();
=======
#include "shell.h"

/**
 * main - main shell program
 * @argc: number of arguments
 * @argv: arrays of cli arguments
 * Return: 0.
 */

#if 0
int main(void)
#else
int main(int argc, char **argv)
#endif
{
	char *command = NULL;
	size_t n = 0;
	char *args[MAX_NUM_ARGS + 1];
#if 1
	shell = *argv;
#endif
	(void) argc;
	if (!isatty(STDIN_FILENO))
	{
		if (getline(&command, &n, stdin) == -1)
		{
			perror("Error: getline() failed\n");
			return (1);
		}
		command[strcspn(command, "\n")] = '\0';
		parse_command(command, args);
		execute_command(args);
		free(command);
		return (0);
	}
	while (1)
	{
		printf("</> ");
		if (getline(&command, &n, stdin) == -1)
		{
			perror("Error: getline() failed\n");
			break;
		}
		command[strcspn(command, "\n")] = '\0';
		parse_command(command, args);
		if (strcmp(args[0], "exit") == 0)
		{
			break;
		}
		execute_command(args);
	}
	free(command);
>>>>>>> ad59fc7a2243afa094794dd9e27fad5e500fa4e9
	return (0);
}
