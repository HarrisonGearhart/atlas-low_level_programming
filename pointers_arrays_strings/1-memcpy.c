#include "main.h"
/**
 * _memcpy- copies memory
 * @dest: mem area to copy to
 * @src: the source to copy
 * @n: unsigned int variable
 * Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
