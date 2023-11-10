#include "variadic_functions.h"

/**
 * print_numbers - a function that prints all numbers followed by new line
 * @separator: the string to be printed between numbers
 * @n: the number of arguments to be used
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arg;

	va_start(arg, n);
	for (a = 0; a < n; a++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	putchar('\n');
	va_end(arg);
}
