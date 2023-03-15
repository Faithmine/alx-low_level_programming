#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that multiplies two numbers.
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: If the program does not receive two arguments, your program
 *	should print Error, followed by a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = 1; i < 3; i++)
		j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
