#include <stdio.h>

/**
 * main - Write function to produce lower and uppercase alphabet
 *
 * Return - always 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	for (a = 'A' ; a <= 'Z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
