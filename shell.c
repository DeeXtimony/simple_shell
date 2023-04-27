#include "shell.h"

/**
 * main - main shell program
 * Return: 0.
 */

int main(void)
{
	char *command = NULL;
	size_t n = 0;
	char *args[MAX_NUM_ARGS + 1];

	/*
	 * function isatty() is used to check if input is
	 * coming from a pipe or the terminal. Read man isatty()
	 */
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
