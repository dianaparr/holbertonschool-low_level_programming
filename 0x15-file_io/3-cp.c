#include "holberton.h"

/**
 *open_and_read_from - func that opens and reads the source file (from_file)
 *@av: type const char of the name file
 *@buff: allocate the bytes read in the from_file
 *Return: file from read
 */
int open_and_read_from(const char *av, char *buff)
{
	int from_file, read_file, close_from;

	/* open file from */
	from_file = open(av, O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		exit(98);
	}
	/* read file from */
	read_file = read(from_file, buff, INT_MAX);
	if (read_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av);
		close(from_file);
		exit(98);
	}
	close_from = close(from_file);
	if (close_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		exit(100);
	}
	return (read_file);
}


/**
 *main - entry point to the program
 *@ac: number of arguments passed
 *@av: arguments
 *Return: 0 if is successful
 */
int main(int ac, char **av)
{
	int dest_file, write_file, close_dest;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* create destination file */
	dest_file = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL) /* check allocate buffer */
	{
		close(dest_file);
		return (0);
	}
	/* write */
	write_file = write(dest_file, buff, open_and_read_from(av[1], buff));
	if (write_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_dest = close(dest_file);
	if (close_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_dest);
		exit(100);
	}
	return (0);
}
