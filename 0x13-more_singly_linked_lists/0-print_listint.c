#include "lists.h"

/**
 * print_listint - a function that prints every element in a linked list
 * @a: type link to be printed from listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *a)
{
	size_t val = 0;

	while (a)
	{
		val++;
		printf("%d\n", val->n);
		a = a->next;
	}

	return (val);
}

