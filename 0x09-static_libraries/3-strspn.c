#include "main.h"

/**
 * _strspn - find the length of prefix substring
 * @s: string to be searched
 * @accept: string to search
 * Return: num of char matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; s[b] != accept[b] ; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (0);
}
