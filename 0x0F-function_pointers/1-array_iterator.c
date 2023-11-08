#include "function_pointers.h"

/**
 * array_iterator - a function that executes function in given array
 *@array: The array to be used
 @size: The size of the array
 @action: The function to perform each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
