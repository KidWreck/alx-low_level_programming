#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multi two int
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}

	return (0);
}
