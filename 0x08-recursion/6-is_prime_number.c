#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function telling if prime number or not
 * @n: number to evaluate
 * Return: 1 if n is prime number, 0 if not prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime with recursion
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if prime number, 0 if not prime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
