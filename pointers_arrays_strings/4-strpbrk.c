#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string to search
 * @accept: bytes to look for
 * Return: Always 0
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);
		}
	if (accept[b] == '\0')
		continue;
	}
	return (0);
}
