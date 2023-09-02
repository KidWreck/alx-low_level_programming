#include <stdio.h>
#include <stdlib.h>

/**
 * main - print least change possible
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, chg = 0, money =  atoi(argv[1]);
		char cents[] = {25, 10, 5, 2, 1};

		for (i = 0 ; i < 5 ; i++)
		{
			if (money >= cents[i])
			{
				chg += money / cents[i];
				money = money % cents[i];
				if (money % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", chg);
	}
	else
		return (printf("Error\n"), 1);

	return (0);
}
