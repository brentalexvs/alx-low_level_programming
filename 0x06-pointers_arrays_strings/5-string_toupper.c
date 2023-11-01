#include "main.h"

/**
 * string_toupper - function that converts lower to upper
 * @s: string to be converted
 * Return: s
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
