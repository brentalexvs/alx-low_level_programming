#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number of arguments to be passed
 * Return: The sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int a;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
