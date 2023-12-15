#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @num: function parameter
 * @index: index to be used
 * Return: 1 on success, -1 on failure/ error
 */

int clear_bit(unsigned long int *num, unsigned int index)
{
	if (index > sizeof(num) * 8)
		return (-1);
	*num &= ~(1 << index);
	return (1);
}
