#include "main.h"

/**
 * _strlen_recirsion - print the length of a string
 * @s: paramter to be used
 * Return: Length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
