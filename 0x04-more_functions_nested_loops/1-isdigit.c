#include "main.h"

/**
 * _isdigit - function that checks for digits between 0-9
 * @c: function paramter
 * Return: 1 on success and 0 on failur
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
