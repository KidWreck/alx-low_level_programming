#include "main.h"

/**
 * rev_string - make strings reverse
 * @s: pointr string
 */

void rev_string(char *s)
{
	char rev = s[];
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	for (i = 0 ; i < len ; i++)
	{
		len--;
		rev = s[i];
		s[i] = s[len];
		s[len] = rev;
	}
}
