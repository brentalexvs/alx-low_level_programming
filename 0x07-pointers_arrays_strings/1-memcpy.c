#include "main.h"

/**
*_memcpy - A function that copies memory to an area
*@src: Source parameter
*@dest: Destination parameter
*@n: Function parameter
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0 ; k < n ; k++)
	{
		dest[k] = src[k];
	}
	return (dest);
}

