#include "main.h"

/**
 * append_text_to_file - add to text file
 * @filename: file name
 * @text_content: string
 * Return: -1 if error, 1 if else;
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (l = 0 ; text_content[l] ; l++)
			;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
