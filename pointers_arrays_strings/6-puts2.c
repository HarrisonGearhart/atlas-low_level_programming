#include "main.h"

/**
  * _puts - Prints every other character of a string
  * @str: The string
  * Return: void
  */
void _puts2(char *str)
{
	for (; *str != '\0'; str+2)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
