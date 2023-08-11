#include<stdio.h>
/**
 * main - Entry void
 * Description: using puts
 * Return: Always postive (0)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
