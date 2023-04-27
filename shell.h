<<<<<<< HEAD
#ifndef SHELL_H
#define SHELL_H

#define MAX_NUM_ARGS 10


/* Standard Headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


/* Function Prototypes */
void parse_command(char *command, char *args[]);
void execute_command(char *args[]);


#if 1
char *shell;
int line_number;
#endif


#endif /* #ifndef SHELL_H */
=======
#ifndef _SHELL_H_
#define _SHELL_H_
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>
#include <errno.h>
#include <fcntl.h>

/*macros*/
#define MAX_COMMAND_LEN 1024
#define MAX_ARGS 64
#define MAX_PATHS 64
#define MAX_PATH_LEN 1024
#define BUFFER_SIZE 1024
#define MAX_LINE 80
#define MAX_ARGS 10
#define MAX_ARG_LEN 50
#define MAX_CMD_LEN 100
#define MAX_PATH 1024
#define MAX_INOUT_SIZE 1024
#define MAX_TOKEN_SIZE 64
#define MAX_NUM_TOKENS 64
#define MAX_CMD_LEN 1024
#define MAX_ALIAS_COUNT 100
#define MAX_ALIAS_NAME_LENGTH 50
#define MAX_ALIAS_VALUE_LENGTH 100
#define MAX_CMD_LENGTH 1024

/* prompt.c */
void print_numbers(void)
int main(void)
int main(int argc, char *argv[])
extern char **environ;
char *my_getline(void)

/* get_input.c */
int parse_args(char *line, char **args)
void set_env(char *args[])
int unset_env(char *args[])
int cd(char *dir)

/* built-in funcs */
void execute_command(char **tokens)
void execute_command(
		char *command)
/* built-in funcs */
void aliasCommand(int argc, char **argv)
void createAlias(char *name, char *value)
void deleteAlias(char *name)
void printAlias(void)
void printfAlias(Alias * alias)
int aliasCount
char *replace_variables(char *command)

#endif
>>>>>>> betty.c
