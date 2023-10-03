#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define noR "ERROR: can't read from %s\n"
#define noW "ERROR: can't write to %s\n"
#define noC "ERROR: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - for ac and av
 * @ac: number of args
 * @av: array of args
 * Return: 1 on seccess, 0 if fail
 */
int main(int ac, char **av)
{
	int f_fd = 0, t_fd = 0;
	ssize_t b;
	char buf[1024];

	if (ac != 3)
		exit(97);
	f_fd = open(av[1], O_RDONLY);
	if (f_fd == -1)
		dprintf(STDERR_FILENO, noR, av[1]), exit(98);
	t_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (t_fd == -1)
		dprintf(STDERR_FILENO, noW, av[2]), exit(99);

	while ((b = read(f_fd, buf, 1024)) > 0)
		if (write(t_fd, buf, b) != b)
			dprintf(STDERR_FILENO, noW, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, noR, av[1]), exit(98);

	f_fd = close(f_fd);
	t_fd = close(t_fd);

	if (f_fd)
		dprintf(STDERR_FILENO, noC, f_fd), exit(100);
	if (t_fd)
		dprintf(STDERR_FILENO, noC, t_fd), exit(100);
	return (EXIT_SUCCESS);
}
