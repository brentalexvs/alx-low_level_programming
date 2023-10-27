#include "main.h"

/**
 * _print_rev_recursion - funtion that prints string in reverse
 * @s: function parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
