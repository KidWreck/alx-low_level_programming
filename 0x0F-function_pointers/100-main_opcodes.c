#include <stdio.h>
#include <stdlib.h>

/**
 * main - print main opcodes
 * @argc: number of args
 * @argv: array of args
 * Return: 1 or 2 if Error, else if else
 */
int main(int argc, char *argv[])
{
	int x;
	char *p = (char *)main;

	if (argc != 2)
		printf("Error\n"), exit(1);

	x = atoi(argv[1]);
	if (x < 0)
		printf("Errot\n"), exit(2);

	while (x--)
		printf("%02hhx%s", *p++, x ? " " : "\n");
}
