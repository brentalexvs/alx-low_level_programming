#include "main.h"

/**
 * create_array - a function that creates an array
 * @size: the size of the array
 * @c: the character to be stored in the array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0 ; a < size ; a++)
		arr[a] = c;
	return (arr);
}
