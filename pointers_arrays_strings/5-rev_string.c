#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: String being reversed
  * Return: Void
  */

void rev_string(char *s)
{
	int i, c, k;
	char *a, x;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		x = s[i];
		s[i] = *a;
		*a = x;
		a--;
	}
}
