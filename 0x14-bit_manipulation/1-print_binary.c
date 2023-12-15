#include "main.h"

/**
 * b2p - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int b2p(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int m;

	n = 1;
	for (m = 1; m <= power; m++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @a: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int a)
{
	unsigned long int num, check;
	char bin;

	bin = 0;
	num = b2p(2, sizeof(unsigned long int) * 8 - 1);
	while (num != 0)
	{
		check = a & num;
		if (check == num)
		{
			bin = 1;
			_putchar('1');
		}
		else if (bin == 1 || num == 1)
		{
			_putchar('0');
		}
		num >>= 1;
	}
}
