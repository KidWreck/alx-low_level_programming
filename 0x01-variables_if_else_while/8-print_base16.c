#include <stdio.h>
/**
 *  * main - Entry void
 *   * Description: using puts
 *    * Return: Always postive (0)
*/
int main(void)
{
	int x = 0;

	while (x <= 16)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
