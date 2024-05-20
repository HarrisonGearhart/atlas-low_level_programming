#include "main.h"

/**
 * print_alphabet - entry point
 * Description: print alphabet in lowercase, followed by new line
 * Return: (void)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
