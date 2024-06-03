#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 * Return: Always a
*/
unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept [b])
			{
				break;
			}
		}
		if (accept [b] == '\0')
			break;
	}
	return (a);
}
