#include "holberton.h"

/**
 *main - entry point to the program
 *@ac: number of arguments passed
 *@av: arguments
 *Return: 0 if is successful
 */
int main(int ac, char **av)
{
	int dest_file, write_file, close_dest, from_file, read_file, close_from;
	char buff[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	/* open file from */
	from_file = open(av[1], O_RDONLY);
	if (from_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
		exit(98);
	/* create destination file */
	dest_file = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
		close(from_file),
		exit(99);
	/* read file from */
	read_file = read(from_file, buff, BUFSIZ);
	if (read_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			close(from_file),
			close(dest_file),
			exit(98);
	/* write */
	write_file = write(dest_file, buff, read_file);
	if (write_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			close(dest_file),
			exit(99);
	close_from = close(from_file);
	if (close_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from),
		exit(100);
	close_dest = close(dest_file);
	if (close_dest < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_dest),
		exit(100);
	return (0);
}
