#include "main.h"

/**
 * _memset - copies data
 * @s: the source to copy to
 * @b: bytes to be overwritten
 * @n: int variable
 * Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
