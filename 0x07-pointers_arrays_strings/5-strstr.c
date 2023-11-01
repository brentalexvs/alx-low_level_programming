#include "main.h"

/**
 * _strstr - Functtion that locates a substring
 * @needle: the substring
 * @haystack: the string
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
		return (haystack);
	}
	return (NULL);
}
