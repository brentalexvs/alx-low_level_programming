#include "main.h"

/**
 * _isalpha - check for alphabet and return 1 else return 0
 *@c: function paramter
 * Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
