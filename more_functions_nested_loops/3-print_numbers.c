#include "main.h"

/**
 * print_numbers - prints numbers 0-9, followed by a new line
 * @n: numbers being printed
 * Return: Always 0 (Successful)
*/

void print_numbers(void)

{
	int n;

	while (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
