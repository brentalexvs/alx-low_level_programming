#include "main.h"

/**
 * _strpbrk - looking for certain bytes in a string
 * @s: string to be searched
 * @accept: string to seach
 * Return: accept of NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *i = accept;

		while (*i != '\0')
		{
			if (*s == *i)
				return (s);
			i++;
		}
		s++;
	}
	return (NULL);
}
