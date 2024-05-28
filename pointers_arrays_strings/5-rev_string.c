#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: String being reversed
  * Return: Void
  */

void rev_string(char *s)
{
	int i, l, l2;
	char a;

	l = 0;
	l2 = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	l2 = l - 1;

	for (i = 0; i < (l / 2); i++)
	{
		a = s[i];
		s[i] = s[l2];
		s[l2--] = a;
	}
}
