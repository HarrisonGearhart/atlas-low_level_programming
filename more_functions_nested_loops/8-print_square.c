#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * @x: x axis of square
 * @y: y axis of square
 * Return: Void

void print_square(int size)

{
	int size, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('\#');
			}
			_putchar('\n');
		}
	}
}
