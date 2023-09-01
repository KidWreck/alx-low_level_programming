#include <stdio.h>
#include "main.h"

/**
 * main - print number of args
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
