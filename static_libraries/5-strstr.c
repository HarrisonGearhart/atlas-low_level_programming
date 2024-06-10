#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring in haystack
 * Return: Always 0
*/
char *_strstr(char *haystack, char *needle)
{
	int a;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		a = 0;
		p = haystack;
		while (*p == needle[a])
		{
			a++;
			p++;
			if (needle[a] == '\0')
				return (haystack);
		}
	}
	return (0);
}
