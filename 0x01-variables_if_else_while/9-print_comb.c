#include <stdio.h>
/**
 *  * main - Entry void
 *   * Description: using puts
 *    * Return: Always postive (0)
*/
int main(void)
{
	int x = 0;
	int y = 0;
	
	while (x <= 9 && y <= 9)
	{
		putchar(x + '0');
		putchar(y + '0');
		x++;
		y++;
	}
	putchar('\n');
	return (0);
}
