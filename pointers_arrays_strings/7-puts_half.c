#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: the string
 * Return: Void
*/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		j = (i - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}

	for (; j < i; j++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
} 
