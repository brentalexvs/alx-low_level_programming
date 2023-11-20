#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints every element within a linked list
 * @a: pointerof list_t to be printed
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *a)
{
	size_t node = 0;

	while (a)
	{
		if (a->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", a->len, a->str);

		a = a->next;
		node++;
	}
	return (node);
}

