#include <stdio.h>

void print_num(void);

/**
 * main - Runs the program
 * Return: Always 0.
 */

int main(void)
{
	print_num();
	return (0);
}

/**
 * print_num - prints number 0 - 9
 */

void print_num(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
		printf("%d.\n", i);
}
