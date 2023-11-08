#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for integers
 * @array: The array to be searched
 * @size: The size of the array to be searched
 * @cmp: the function parameter
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0 ; a < size; a++)
	{
		if (cmp(array[a]) == 1)
			return (a);
	}
	return (-1);
}
