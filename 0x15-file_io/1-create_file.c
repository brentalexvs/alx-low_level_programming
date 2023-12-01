#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: A pointer to the name of a file.
 * @text_content: A pointer that points to string that will write in the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int c, a, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	c = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(c, text_content, l);

	if (c == -1 || a == -1)
		return (-1);

	close(c);

	return (1);
}

