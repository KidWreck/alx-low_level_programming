#include "main.h"

/**
 * creat_file - creat file
 * @filename: file name
 * @text_content: string
 * Return: -1 if error, 1 if else;
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (!filename)
		return (0);
	if (text_content)
	{
		for (l = 0 ; text_content[l] ; l++)
			;
	}
	fd = open(filename, O_CREAT | O_RDWER | O_TRUNC, 0600);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
