#include <stdio.h>

/**
 * main - print all combos of single digits
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	for (n = 0; n < 10 ; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
