#include "main.h"

/**
 * leet - encode string using the leet encoder
 * @s: the string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int x, y;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			if (s[x] ==  a[y])
				s[x] = b[y];
		}
	}
	return (s);
}
