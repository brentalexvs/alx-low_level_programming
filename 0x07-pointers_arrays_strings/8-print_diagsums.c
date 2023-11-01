#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints sum of two diagonals
 * @a: parameter 1
 * @size: parameter 2
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int i;

	count1 = 0;
	count2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		count1 = count1 + a[i * size + i];
	}
	for (i = size - 1 ; i >= 0; i--)
	{
		count2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", count1, count2);
}
