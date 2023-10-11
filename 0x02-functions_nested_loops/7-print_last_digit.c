#include "main.h"

/**
 * print_last_digit - display the last digit of every number
 * @a: function parameter
 * Return: b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);

}
