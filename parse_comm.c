#include "shell.h"

/**
 * parse_command - parse command into arguments
 * @command: commands
 * @args: arguments
 */

void parse_command(char *command, char *args[])
{
	char *token = strtok(command, " ");
	int i = 0;

	while (token != NULL && i < MAX_NUM_ARGS)
	{
		args[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	args[i] = NULL;
}
