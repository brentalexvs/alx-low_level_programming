#include <stdio.h>

/**
 * main - print single digits from base 10 to 0 with putchar
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	for (n = 0 ; n < 10 ; n)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
