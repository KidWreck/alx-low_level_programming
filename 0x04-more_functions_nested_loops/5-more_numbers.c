#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 * Return: always 0
 */

void more_numbers(void);
{
	int x, row, count

	for (x = 0 ; x <= 14 ; x++)
	{
		for (row = 1 ; row <= 10 ; row++)
		{
			x = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				x = count % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}
}
