#include <stdio.h>

/**
 * main - print numbers
 * Return: always 0
 */

int main(void)
{
	int x;

	printf("1");
	for (x = 2 ; x <= 100 ; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
			printf(" Fizz");
		else if (x % 5 == 0 && x % 3 != 0)
			printf(" Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf(" FizzBuzz");
		else
			printf(" %d", x);
	}
	printf("\n");
	return (0);
}

