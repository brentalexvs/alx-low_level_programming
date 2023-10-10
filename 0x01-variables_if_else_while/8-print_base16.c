#include <stdio.h>

/**
 * main - from 0 to base 16
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	char m;

	for (n = 0 ; n < 10 ; n++)
		putchar (n + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
