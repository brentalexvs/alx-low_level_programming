#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - function that finds the length of a string
 * @s: string to find the length of
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}

/**
 * _strcpy - a function that copies strings
 * @dest: the destination string
 * @src: the source string
 * Return: the copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = _strlen(src);
	for (b = 0; b < len; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the new dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);
	_strcpy(ndog->owner, owner);
	ndog->age = age;
	return (ndog);
}
