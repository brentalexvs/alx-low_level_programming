#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A string that will add text to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If there is no file or the user lacks permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int b, a, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	b = open(filename, O_WRONLY | O_APPEND);
	a = write(b, text_content, l);

	if (b == -1 || a == -1)
		return (-1);

	close(b);

	return (1);
}
