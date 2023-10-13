#include "main.h"

/**
 * _isupper - checks for uppercase char
 * @c: function parameter
 * Return: 1 if uppercase else 0 on anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
