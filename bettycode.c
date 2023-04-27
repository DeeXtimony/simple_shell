#include <stdio.h>


/**
 * print_num - prints number 0 - 10
 */
void print_num(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d.\n", i);
	printf("%d\n", i);
}

/**
 * main - Runs the program
 * Return: Always 0.
 */

int main(void)
{
	print_num();
	return (0);
}
