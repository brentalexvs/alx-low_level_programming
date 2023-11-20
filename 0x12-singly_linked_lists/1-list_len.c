#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @a: The pointer to the list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *a)
{
	size_t b = 0;

	while (a)
	{
		b++;
		a = a->next;
	}
	return (b);
}

