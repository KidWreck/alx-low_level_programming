#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */

void main(int argc, char **argv)
{
	printf("%s\n", *argv);
	(void)argc;

	return (0);
}
