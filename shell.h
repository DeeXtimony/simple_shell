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
