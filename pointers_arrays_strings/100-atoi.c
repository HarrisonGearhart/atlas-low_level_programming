#include "main.h"

/**
 * _atoi - Converts string into int
 * @s: the pointer to convert(string) 
 * Return: integer. 0 if no integer in string
*/

int _atoi(char *s)
{
	int c = 0;
	unsigned int u = 0;
	int m = 1;
	int i = 0;

	while (s[c])
	{
		if (s[c] == '-')
		{
			m = -1;
		}
		while (s[c] >= 0 && s[c] <= 9)
		{
			i = 1;
			u = (u * 10) + (s[c] - '\0');
			c++;
		}
		if (i == 1)
		{
			break;
		}
		c++;
	}
	u *= m;

	return (u);
}
