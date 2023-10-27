#include "main.h"

/**
 * factorial - function that returns factorial of any number
 * @n: function parameter to be used
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
