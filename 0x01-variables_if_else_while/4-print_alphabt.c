#include <stdio.h>

/**
 * main - All alphabet besides e and q
 *
 * Return - always 0
 */

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
			putchar(a);
	putchar('\n');
	return (0);

}
