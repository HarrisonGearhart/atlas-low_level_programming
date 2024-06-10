#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: Distination value
 * @src: Source Value
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
