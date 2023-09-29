#include "main.h"

/**
 * get_endianness - check little vs big endien
 * Return: 0 if big , 1 if liitle
 */
int get_endianness(void)
{
	unsigned long int i;
	char *x = (char *) &i;

	return (*x);
}
