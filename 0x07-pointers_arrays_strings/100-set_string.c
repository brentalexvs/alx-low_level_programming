#include "main.h"

/**
 * set_string - set value of a pointer to char
 * @s: pointer
 * @to: character
 * Return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
