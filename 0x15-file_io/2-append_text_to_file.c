#include "holberton.h"

/**
 *_strlen - legth of a string
 *@s: pointer with the stored string
 *Return: Always 0.
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: pointer to file to be created
 *@text_content: string to write to the file
 *Return: 1 on sucess and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn_f; /* variable for open file */
	ssize_t wrt_f; /* variable for write */

	if (filename == NULL)
		return (-1);
	/* open file */
	opn_f = open(filename, O_WRONLY | O_APPEND);
	if (opn_f == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	/* write file */
	wrt_f = write(opn_f, text_content, _strlen(text_content));
	if (wrt_f == -1)  /* when write fails */
		return (-1);
	close(opn_f);
	return (1);
}
