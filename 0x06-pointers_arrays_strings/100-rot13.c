#include "main.h"

/**
 * rot13 - rotate the alphabet 13 char
 * @a: string
 * Return: a
 */

char *rot13(char *a)
{
	int i, j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; a[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (a[i] == data[j])
			{
				a[i] = rot[j];
				break;
			}
		}
	}
	return (a);
}
