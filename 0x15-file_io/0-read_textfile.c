#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A text file print to STDOUT.
 * @txtfile: text file to be read
 * @let: the letters to be read
 * Return: a - the number of bytes being read and printed
 *        0 if the function fails or textfile is NULL.
 */

ssize_t read_textfile(const char *txtfile, size_t let)
{
	char *s;
	ssize_t c;
	ssize_t a;
	ssize_t d;

	c = open(txtfile, O_RDONLY);
	if (c == -1)
		return (0);
	s = malloc(sizeof(char) * let);
	d = read(c, s, let);
	a = write(STDOUT_FILENO, s, d);

	free(s);
	close(c);
	return (a);
}
