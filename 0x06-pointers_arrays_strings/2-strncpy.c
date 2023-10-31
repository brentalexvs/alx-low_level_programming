#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: funtion one
 * @src: function two
 * @n: function three
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
