#include "main.h"

/**
 * _islower - write a progam that returns 1 if c is lowercase
 * @c: parameter to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}
