#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the std output
 *@filename: pointer to file
 *@letters: number of bytes read from the file
 *Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opn_f; /* variable for open file */
	char *buff; /* allocate data read */
	ssize_t rd_f, wrt_f; /* variables for read and write */

	if (filename == NULL || letters > SSIZE_MAX)
		return (0);
	/* open file */
	opn_f = open(filename, O_RDONLY);
	if (opn_f == -1)
		return (0);
	/* allocate buff where the read data is stored */
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)  /* check */
		return (0);
	/* read file */
	rd_f = read(opn_f, buff, letters);
	if (rd_f == -1)
		return (0);
	/* write file */
	wrt_f = write(STDOUT_FILENO, buff, rd_f);
	if (wrt_f == -1)
		return (0);
	close(opn_f);
	free(buff);
	return (wrt_f);
}
