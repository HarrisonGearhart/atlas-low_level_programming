#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: Prints alphabet 10 times, followed by new line
 * Return: void
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}

		_putchar('\n');
		i++;
	}
}
