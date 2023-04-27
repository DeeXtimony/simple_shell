#include "shell.h"


#if 0
/** 
 * main - main shell program
 * @void: argument type
 */

int main(void)
#else

/**
 * main - main shell program
 * @argc: number of arguments
 * @argv: arrays of cli arguments
 * Return: 0.
 */

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
	return (0);
}
