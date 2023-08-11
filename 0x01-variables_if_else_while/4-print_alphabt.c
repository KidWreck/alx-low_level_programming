#include<stdio.h>
/**
 *  * main - Entry void
 *   * Description: using puts
 *    * Return: Always postive (0)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
